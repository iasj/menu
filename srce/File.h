#ifndef __MENU_FILE_H__
#define __MENU_FILE_H__

#include "String.h"

typedef struct File File;
struct CFile{
  File* (*make)();
};
extern const struct CFile CFile;
#endif
