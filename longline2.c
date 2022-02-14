#include <stdio.h>

#undef MAXLINE
#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];
//definitions


int igetline(void);
void copy(void);

int main()
{
	int len;
	extern int max;//declaration
	max=0;
	extern char longest[];//declaration

	while((len = igetline()>1))
		if(len>max)
		{
			max = len;
			copy();
		}
	if(max>0)
		printf("%s",longest);
	return 0;	
			
}


int igetline(void)
{
	int c,i;
	extern char line[];//declaration

	for(i=0;i<MAXLINE-1&&(c=getchar())!=EOF&&c!='\n';++i)
		line[i]=c;
	if(c=='\n')
	{
		line[i]=(char)c;
		++i;
	}
	line[i]='\0';
	return i;
}



void copy()
{
	int i;
	extern char line[],longest[];//declration external variables
	i=0;
	while((longest[i]=line[i])!='\0')
	++i;
}

