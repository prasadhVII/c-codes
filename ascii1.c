#include <stdio.h>
#include <limits.h>

int main()
{
	for(int i=0;i<=SCHAR_MAX;i++)
		printf("%3d - %c\n",i,i);
	printf("\n");
	return 0;
}
