#include <stdio.h>
#include "temp.h"
void temp(){
  printf("hello\n");
}
const struct CTemp CTemp = {
  .temp = temp,
};
