#include <stdio.h>

int main()
{
	char ptr[3]="prasad";
	int i=0;
	while(++i,i<=90){if(i>89) break;}
	printf("%d\n%s\n",i,ptr);

	int p=-3,q=2,r=0,s,t;
	s=++p&&++q||r++;
	t=p+q+s++;
	printf("\n%d %d\n",s,t);

	if(p<q)
	if(q>s)
	printf("p=%d\n",q);
	else
	printf("s=%d\n",s);

	return 0;
}
