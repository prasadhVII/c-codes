#include <stdio.h>
#include "mystdlib.h"

int main()
{
	char str[20],arr[30];
	
	printf ("enter int :");
	scanf("%s",str);
	printf ("enter double :");
	scanf("%s",arr);
	int num = atoi(str);
	double dbl=atof(arr);
	printf("integer is %d\ndouble is %e\n",num,arr);
	//system("runc limits1");
	return 0;
}
