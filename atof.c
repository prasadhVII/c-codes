#include <ctype.h>
#include "mystdlib.h"


/* version 1-atoi
int atoi(char *input) 
 {
     int i,n,sign;
     for(i=0;isspace(input[i]);i++)
         ;
     sign=(input[i]=='-')?-1:1;
     if((input[i]) == '+'||input[i]=='-')
         i++;
     for(n=0;isdigit(input[i]);i++)
         n=10*n+(input[i]-'0');
     return sign*n;
 }
*/
//version 2 -atoi
int atoi(char *s)
{
        double atof(char*s);
        return (int)atof(s);
}

double atof(char *s)
{
        double val,power;
        int i,sign;
        for (i=0;isspace(s[i]);i++);
        sign=(s[i]=='-')?-1:1;
        if(s[i]=='+'||s[i]=='-')
                i++;
        for(val=0.0;isdigit(s[i]);i++)
                val=10.0*val+(s[i]-'0');
        if(s[i]=='.')
                i++;
        for(power=1.0;isdigit(s[i]);i++)
        {
                val=10.0*val+(s[i]-'0');
                power*=10.0;
        }
        return sign*val/power;
}
