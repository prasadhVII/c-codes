#include <stdio.h>
#undef MAXVAL
#define MAXVAL 100

static int sp=0;
static double val[MAXVAL];

void dpush(double f)
{
	if(sp<MAXVAL)
		val[sp++]=f;
	else
		printf("error : stack full,cant push %g\n",f);
}


double dpop(void)
 {
     if(sp>0)
         return val[--sp];
     else{
         printf("error : stack empty\n");
         return 0.0;
     }
}
