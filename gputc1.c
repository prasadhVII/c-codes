#include <stdio.h>
//#include <limits.h>
//#ifdef EOF
#undef EOF
#define EOF 'A'
int main()
{
    int c;
	printf("EOF=%d\n",EOF);
	while ((c=getchar())!=EOF)
	putchar(c);
	fflush(stdin);
	while ((c=getc(stdin))!=EOF)
	putc(c,stdout);
	fflush(stdout);
	return 0;
}
