#ifndef __STRING_H__
#define __STRING_H__

typedef struct String String;
struct CString{
  String* (*make)(char   *strg);
  int     (*diff)(String *a,String *b);
  void    (*show)(String *objc);
  char*   (*gets)(String *objc);
  long    (*leng)(String *objc);
  String* (*glue)(String *a,String *b);
};
extern const struct CString CString;
#endif

