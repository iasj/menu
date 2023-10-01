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
  long i = 0;
  while(strg[objc->leng]) objc->leng++;
  objc->strg = malloc(objc->leng*sizeof(char));
  do{
    objc->strg[i] = strg[i];
    i++;
  }while(strg[i]);
  return objc;
}
static char* gets(const String *objc){
  if(objc) return objc->strg;
  puts("empty string object. Use CString->make()");
  return NULL;
}
static void* sets(char *strg,String *objc){
  if(!objc) return objc=make(strg);
  return objc->strg=strg;
}
static void show(const String *objc){
  if(objc)printf("%d'%s'\n",objc->leng,objc->strg);
}

const struct CString _CString = {
  .make = make,
  .show = show,
  .gets = gets,
  .sets = sets,
};
const struct CString *CString = &_CString;
