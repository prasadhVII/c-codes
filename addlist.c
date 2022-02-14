//list using array
#undef NIL
#define NIL (-1)




int addlist(int val)
{
	int getlist();
	extern int list[];
	extern int pre_index;
	int index = getlist();
	if(index == -1)
		return index;
	list[index]= val;
	if(pre_index==NIL){
		pre_index=index;
		return 0;
	}
	list[pre_index+2] = index;
	list[index+1] = pre_index;
	pre_index=index;
	return 0;
}
