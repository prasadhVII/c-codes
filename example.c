#include <stdio.h>
#include "matrice.h"
#undef printf(char *,...)
int main()
{
/*	int i,p;
	char c,str[20];
	float fl;
	double dou;
	i=scanf("%d %f %E %c %[^\n]s",&p,&fl,&dou,&c,str);
	printf("scanf = %d\nstring = %s",i,str);
*/	int arr[][3]={1,2,3,4,5,6,7,8,9};
	int tra[3][3];
	int sum[3][3];
	for(int i=0;i<3;i++){
	printf("\n");
         for(int j=0;j<3;j++)
             printf("\t%d",arr[i][j]);
	}
	printf("\n\n");
	transpose(arr,tra);
	matrice_mul(arr,tra,sum);
	for(int i=0;i<3;i++){
	printf("\n");
         for(int j=0;j<3;j++)
             printf("\t%d",tra[i][j]);
	}
	printf("\n\n");
	for(int i=0;i<3;i++){
     printf("\n");
          for(int j=0;j<3;j++)
              printf("\t%d",sum[i][j]);
     }
     printf("\n");
	return 0;
}
