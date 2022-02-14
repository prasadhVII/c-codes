#include <stdio.h>
#include "mystring.h"
//#ifdef MAX
 #undef MAX
 #define MAX 8*sizeof(long unsigned)

static char binary[MAX];

 void  getbinary(long unsigned  x)
 {
     extern char binary[];
     int i;
     for (i=0;x!=0;x>>=1,i++)
         binary[i]= (x&01)+'0';
     binary[i]='\0';
     stringreverse(binary);
     puts(binary);
     return ;
 }
