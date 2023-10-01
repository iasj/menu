#include <stdio.h>
#include "String.h"

static void make(){
  char   *strg  = "hello";
  String *hello = CString->make(strg);
  printf("%d\n",strg==CString->gets(hello));
  char *s = "byebye";
  CString->sets(s,hello);
  printf("%d\n",s==CString->gets(hello));
  String *new = CString->sets(strg,NULL);
  printf("%d\n",strg==CString->gets(new));
}
static void test(){
  make();
}

const struct TString _TString = {
  .make = make,
  .test = test,
};
const struct TString *TString = &_TString;
