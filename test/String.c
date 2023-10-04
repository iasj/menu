#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "String.h"

char *hello = "hello";
char *world = "world";
char *helloworld = "helloworld";
char *empty = "";

String *HELLO;
String *WORLD;
String *HELLOWORLD;
String *EMPTY;

static void make(){
  HELLO = CString.make(hello);
  WORLD = CString.make(world);
  HELLOWORLD = CString.make(helloworld);
  EMPTY = CString.make(empty);
}
static void diff(){
  assert(!CString.diff(NULL,NULL),"!diff: NULL NULL");
  assert(!CString.diff(HELLO,HELLO),"!diff: HELLO HELLO");
  assert(!CString.diff(EMPTY,EMPTY),"!diff: '' ''");
  assert( CString.diff(HELLO,NULL)," diff: HELLO NULL");
  assert( CString.diff(NULL,HELLO)," diff: NULL HELLO");
  assert( CString.diff(HELLO,EMPTY)," diff: HELLO ''");
  assert( CString.diff(EMPTY,HELLO)," diff: '' HELLO");
  assert( CString.diff(HELLO,WORLD)," diff: HELLO WORLD");
  assert( CString.diff(WORLD,HELLO)," diff: WORLD HELLO");
  assert( CString.diff(HELLOWORLD,HELLO)," diff: HELLOWORLD HELLO");
  assert( CString.diff(HELLO,HELLOWORLD)," diff: HELLO HELLOWORLD");
}
static void gets(){
  char* s = CString.gets(HELLO);
  assert(!strcmp(s,hello),"gets: hello");
  s = NULL;
  char* h = CString.gets(CString.make(NULL));
  assert(s==h,"gets: NULL");
  s = "";
  h = CString.gets(EMPTY);
  assert(!strcmp(s,h),"gets: empty");

}
static void leng(){
}
static void glue(){
  String* g = CString.glue(HELLO,WORLD);
}
static void show(){
}
static void test(){
  make();
  diff();
  gets();
  leng();
  glue();
  show();
}

const struct TString TString = {
  .make = make,
  .diff = diff,
  .gets = gets,
  .leng = leng,
  .glue = glue,
  .show = show,
  .test = test,
};
