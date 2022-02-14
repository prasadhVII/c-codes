#include <stdio.h>
#include "mystring.h"

#undef MAXLINE
#define MAXLINE 1024


int main()
{
	int len,max=0;
	char line[MAXLINE],longest[MAXLINE];

	while((len = igetline(line,MAXLINE))>1)
		if(len>max)
		{
			max = len;
			copy(longest,line);
		}
	if(max>0)
		printf("%s",longest);
	return 0;	
			
}
