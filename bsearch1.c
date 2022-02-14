#include <stdio.h>
#include "mysort.h"
int main()
{
	int num[]={-9,0,1,6,8,23,34,56,59,65,67,87,89,100};
	int size = sizeof(num)/sizeof(int);
	int val;
	printf("enter value to search :");
	scanf("%d",&val);
	int match = binarysearch(val,num,size);
	(match==-1)?printf("match not found\n") : printf("match found at postion = %d\n",match+1);
	printf("array size = %d\n",size);
	return 0;
}
