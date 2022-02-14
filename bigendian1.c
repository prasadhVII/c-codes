#include <stdio.h>
#include "mystdlib.h"
  
/* function to show bytes in memory, from location start to start+n*/
void show_mem_rep(char *start, int n) 
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2d", start[i]);
    printf("\n");
}
  
/*Main function to call above function for 0x01234567*/
int main()
{
   int i;
   scanf("%d",&i);
   show_mem_rep((char *)&i, sizeof(i));
   getbinary(i);
   getchar();
   return 0;
}
