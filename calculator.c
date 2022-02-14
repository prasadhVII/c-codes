#include <stdio.h>
#include "mystdlib.h"
#include "myds.h"
#include "mylib.h"
//
#undef MAXOP
#define MAXOP 100 //max size of operand or operator
#undef NUMBER
#define NUMBER '0'//signal that number was found


int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type=getop(s))!=EOF)
	{
		switch(type)
		{
			case NUMBER :
				dpush(atof(s));
				break;
			case '+':
				dpush(dpop()+dpop());
				break;
			case '*' :
				dpush(dpop()*dpop());
				break;
			case '-' :
				op2 = dpop();
				dpush(dpop()-op2);
				break;
			case '/' :
				op2 = dpop();
				if(op2!=0.0)
					dpush(dpop()/op2);
				else
					printf("error : zero divisor\n");
				break;
			case '\n' :
				printf("\t%.8g\n",dpop());
				break;
			default :
				printf("error : unknown command %s\n",s);
				break;
				
		}
	}
	return 0;
}
