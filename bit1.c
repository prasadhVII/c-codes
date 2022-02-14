#include <stdio.h>
#include "mystring.h"
#include "mystdlib.h"


int main()
{
	extern char  binary[];
	unsigned short x;
	int p,n;
	printf("number :");
	scanf("%u",&x);
	printf("from position :");
	scanf("%d",&p);
	printf("n bits :");
	scanf("%d",&n);
	unsigned short int bit = getbits(x,p,n);
	getbinary(x);
	printf(" %u  from position %d to %d bits =  %u\n",x,p,n,bit);
	getbinary(bit);
	return 0;
}

