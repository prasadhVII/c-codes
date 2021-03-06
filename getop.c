#include <ctype.h>
#include <stdio.h>
#include "mylib.h"

#undef NUMBER
#define NUMBER '0'

int getop(char *s)
{
	int i,c;

	while((s[0]=c=getch())==' '||c=='\t');
	s[1]='\0';
	if(!isdigit(c)&&c!='.')
		return c; //not anumber
	i=0;
	if(isdigit(c)) //collect integer part
		while(isdigit(s[++i]=c=getch()));
	if(c=='.') //collect fraction part
		while(isdigit(s[++i]=c=getch()));
	s[i]='\0';
	if(c!=EOF)
		ungetch(c);
	return NUMBER;
	
}
