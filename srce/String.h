#ifndef __STRING_H__
#define __STRING_H__

typedef struct String String;
struct CString{
  String* (*make)(const char   *strg);
  void    (*show)(const String *objc);
  char*   (*gets)(const String *objc);
  void*   (*sets)(      char   *strg,String* objc);
  String* (*glue)(const String *a,const String *b);
};
extern const struct CString CString;
#endif

