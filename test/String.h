#ifndef __TEST_STRING_H__
#define __TEST_STRING_H__
#include "../srce/String.h"
#include "../main.h"
struct TString{
  void (*make)();
  void (*diff)();
  void (*gets)();
  void (*leng)();
  void (*sets)();
  void (*glue)();
  void (*show)();
  void (*test)();
};
extern const struct TString TString;
#endif

