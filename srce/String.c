#include <stdio.h>
#include <stdlib.h>
#include "String.h"

struct String{
  char *strg;
  long  leng;
};

static String* make(const char *strg){
  String *objc = malloc(sizeof(String));
  objc->leng = 0;
  objc->strg = NULL;
  if(!strg) return objc;
  long i = 0;
  while(strg[objc->leng]) objc->leng++;
  objc->strg = malloc(objc->leng*sizeof(char));
  do{
    objc->strg[i] = strg[i];
    i++;
  }while(strg[i]);
  return objc;
}
static int diff(const String *a,const String *b){
  if(a&&!b||!a&&b) return 1;
  if(!a&&!b)       return 0;
  if(a->leng!=b->leng) return 1;
  long i = 0;
  while(i<a->leng)
    if(a->strg[i]!=b->strg[i]) return 1;
  return 0;
}
static char* gets(const String *objc){
  if(objc) return objc->strg;
  puts("empty string object. Use CString->make()");
  return NULL;
}
static void* sets(char *strg,String *objc){
  if(!objc) return objc=make(strg);
  objc->leng = 0;
  while(strg[objc->leng++]);
  return objc->strg=strg;
}
static String* glue(const String *a,const String *b){
  if(!a&&!b) return NULL;
  if(!a&& b) return make(b->strg);
  if( a&&!b) return make(a->strg);
  if(!a->leng&&!b->leng) return make("");
  if(!a->leng&& b->leng) return make(b->strg);
  if( a->leng&&!b->leng) return make(a->strg);
  String *g = malloc(sizeof(String));
  g->leng = 0;
  g->strg = malloc((a->leng+b->leng)*sizeof(char));
  char *walker = a->strg;
  while((g->strg[g->leng++]=*walker)) walker++;
  walker=b->strg;g->leng--;
  while((g->strg[g->leng++]=*walker++));
  g->leng--;
  walker=g->strg;
  return g;
}
static void show(const String *objc){
  if(objc)printf("%ld'%s'\n",objc->leng,objc->strg);
}

const struct CString CString = {
  .make = make,
  .show = show,
  .gets = gets,
  .sets = sets,
  .glue = glue,
};
