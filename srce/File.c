#include <stdio.h>
#include <stdlib.h>
#include "File.h"

struct File{
  char *path;
  FILE *file;
  long  leng;
};

static File* make(){
  File *file = malloc(sizeof(File));
  return file;
}

const struct CFile CFile = {
  .make = make,
};
