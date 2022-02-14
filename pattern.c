#include <stdio.h>
#include "mystring.h"

#undef MAXLINE
#define MAXLINE 1000

char *pattern = "ould";

//find all lines matching patterns
int main()
{
	char line[MAXLINE];
	int found = 0;

	while(igetline(line,MAXLINE)>0)
		if(stringindex(line,pattern)>=0)
		{
			printf("%s",line);
			found++;
		}
	return found;	
} 
