#include <stdio.h>
#include "mylib.h"

int main()
{
	int a=5,b=4;
	int t;
	t=(1,2,3);
	int op = ((a==b)||printf(""));
	//int oq = (printf("prasad\n")||printf(""));
	printf("%d\n%d\n%d\n",op,4,t);
	int n =9;
	printf("%d - %d - %d - %d\n",++n,n++,n++,++n);
	int num;
	scanf("%d",&num);
	isodd(num);
	return 0;
}
