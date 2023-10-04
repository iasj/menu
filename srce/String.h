#ifndef __STRING_H__
#define __STRING_H__

typedef struct String String;
struct CString{
  String* (*make)(char   *strg);
  void    (*show)(String *objc);
  char*   (*gets)(String *objc);
  long    (*leng)(String *objc);
  String* (*sets)(char   *strg,String* objc);
  String* (*glue)(String *a,String *b);
};
extern const struct CString CString;
#endif

