#include <stdio.h>
/*#include "srce/File.h"*/
/*#include "test/File.h"*/
#include "srce/String.h"
#include "test/String.h"

int main(const int argc,const char **argv){

  TString->test();

  return 0;
}






































































































/*#include <stdio.h>*/
/*#include <termios.h>*/
/*#include <unistd.h>*/
/*#include <stdlib.h>*/
/*#include <pwd.h>*/
/*#include <string.h>*/



/*char* concat(const char *s1, const char *s2){*/
    /*char *result = malloc(strlen(s1)+strlen(s2)+1);*/
    /*strcpy(result, s1);*/
    /*strcat(result, s2);*/
    /*return result;*/
/*}*/
/*char Getc(){*/
  /*char c;*/
  /*static struct termios oldt, newt;*/

  /*tcgetattr(STDIN_FILENO,&oldt);*/
  /*newt = oldt;*/

  /*newt.c_lflag &= ~(ICANON);*/
  /*tcsetattr( STDIN_FILENO, TCSANOW, &newt);*/
  /*c=getchar();*/

  /*tcsetattr( STDIN_FILENO, TCSANOW, &oldt);*/

  /*return c;*/
/*}*/

/*char** readlines(FILE *fp){*/
  /*if (fp == NULL) return NULL;*/
  /*size_t len  = 0;*/
  /*ssize_t read;*/
  /*int nlines=0;*/
  /*int c;*/

  /*while(c=fgetc(fp)!=EOF){*/
    /*if(c=='\n')nlines++;*/
  /*}*/
  /*printf("%d\n",nlines);*/
  /*char **lines = malloc(nlines*sizeof(char*));*/
  /*int i = 0;*/

  /*while((read=getline(lines+i,&len,fp))!=-1) i++;*/

  /*return lines;*/

/*}*/
/*int main(int argc,char **argv){*/

  /*FILE *fp = fopen("makefile", "r");*/
  /*long int lines =0;*/

  /*if ( fp == NULL ) {*/
    /*return -1;*/
  /*}*/

  /*while (EOF != (fscanf(fp, "%*[^\n]"), fscanf(fp,"%*c")))*/
        /*++lines;*/

  /*printf("Lines : %li\n", lines);*/

  /*return 0;*/
/*}*/
