#include <stdio.h>
#include <stdlib.h>
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
}
static void leng(){
}
static void sets(){
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
  sets();
  glue();
  show();
}

const struct TString TString = {
  .make = make,
  .diff = diff,
  .gets = gets,
  .leng = leng,
  .sets = sets,
  .glue = glue,
  .show = show,
  .test = test,
};
