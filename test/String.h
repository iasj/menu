#ifndef __TEST_STRING_H__
#define __TEST_STRING_H__
#include "../srce/String.h"
struct TString{
  void (*make)();
  void (*test)();
};
extern const struct TString *TString;
#endif

