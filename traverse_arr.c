#include<stdio.h>

void traverse_arr(int *arr,int size)
{
	printf("elements in array : \n");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
