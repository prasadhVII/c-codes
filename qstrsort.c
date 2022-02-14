#include <string.h>

void strswap(char **v,int i,int j)
{
	char *temp;
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}


void qstrsort(char **v,int left,int right)
{
	int i,last;

	if(left>=right)//do nothing if array contains fewer than two elements
		return ;
	strswap(v,left,(left+right)/2);
	last = left;
	for(i=left+1;i<=right;i++)
		if(strcmp(v[i],v[left])<0)
			strswap(v,++last,i);
	strswap(v,left,last);
	qstrsort(v,left,last-1);
	qstrsort(v,last+1,right);
}
