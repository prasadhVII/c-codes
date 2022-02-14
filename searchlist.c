#undef NIL
#define NIL (-1)

int searchlist(int val)
{
	extern int list[];
	extern int head;
	extern int pre_index;
	if(pre_index==NIL)
		return -1;
	for(int i=head;i!=pre_index;i=list[i+2])
		if(list[i]==val)
			return 0;
	if(list[pre_index]==val)
		return 0;
	return 1;
}
