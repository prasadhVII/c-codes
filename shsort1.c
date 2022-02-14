#include <stdio.h>
#include "mysort.h"

void shellsort(int *v,int n);

int main()
{
	int arr[]={3,5,6,7,-9,1,0,-1,-9};
	int size = sizeof(arr)/sizeof(int);
//	shellsort(arr,size);
	quesort(arr,0,size-1);
	printf("quesort  sorted in non-increasing :");
	for(int i =0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
	return 0;

}
