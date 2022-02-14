#include <stdio.h>


#undef NIL
#define NIL (-1)

int traverselist()
{
	extern int list[];
	extern int head;
	extern int pre_index;
	if(pre_index==NIL)
		return -1;
	for(int i=head;i!=pre_index;i=list[i+2])
		printf("%d ",list[i]);
	printf("%d\n",list[pre_index]);
	return 0;
}
