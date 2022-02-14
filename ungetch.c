#include <stdio.h>

#undef BUFFSIZE
#define BUFFSIZE 100

static int buffp=0;
static char buff[BUFFSIZE];


void ungetch(int c)
{	
	if (buffp >= BUFFSIZE)
		printf("ungetch : too many characters\n");
	else
		buff[buffp++]=c;
}


int getch(void)
 {
     return (buffp>0)?buff[--buffp]:getchar();
 }
