#include<stdio.h>
#include <limits.h>
#undef MAXVAL
#define MAXVAL ULONG_MAX

void isodd(unsigned long int num)
{
	if(num<=MAXVAL)
		(num&1)?printf("odd\n"):printf("even\n");
	else
	 	printf("invalid number\n");
}
