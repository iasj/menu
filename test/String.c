#include <stdio.h>
#include <assert.h>
#include "String.h"

char *hello = "hello";
char *world = "world";
char *helloworld = "helloworld";

String *HELLO;
String *WORLD;
String *HELLOWORLD;

static void make(){
  HELLO = CString.make(hello);
  WORLD = CString.make(world);
  HELLOWORLD = CString.make(helloworld);
}
static void diff(){
}
static void gets(){
}
static void leng(){
}
static void sets(){
}
static void glue(){
  String* g = CString.glue(HELLO,WORLD);
  CString.show(g);
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
