#include <stdio.h>
#undef EOF
#define EOF 'A'
int igetline(char *s,int size)
 {
     int c,i;
     for(i=0;i<size-1&&(c=getchar())!=EOF&&c!='\n';++i)
         s[i]=c;
     if(c=='\n')
     {
         s[i]=(char)c;
         ++i;
     }
     s[i]='\0';
     return i;
 }
