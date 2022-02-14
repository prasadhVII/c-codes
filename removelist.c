
#undef NIL
#define NIL (-1)
#undef OBJSIZ
#define OBJSIZ 3
#undef FREE
#define FREE 0


int removelist(int val)
{
	extern int list[];
	extern int freebuf[];
	extern int head;
	extern int pre_index;
	if(pre_index==NIL)
		return -1;
	for(int i=head;;i=list[i+2]){
		if(head==pre_index&&list[head]==val){//single object
			list[head]=0;
			freebuf[head/OBJSIZ]=FREE;
			head=pre_index=NIL;
			return 0;
		}
		if(list[head] == val){       //first obect
			list[list[head+2]+1]=NIL;
			freebuf[head/OBJSIZ]=FREE;
			list[head] == 0;
			head = list[head+2];
			//return 0;
			continue;
		}
		if(list[pre_index] == val){       //last object
			list[list[pre_index+1]+2]=NIL;
			freebuf[pre_index/OBJSIZ]=FREE;
			list[pre_index]=0;
			pre_index = list[pre_index+1];
			return 0;
		}
		if(list[i]==val){    //middle objects
			list[list[i+1]+2]=list[i+2];
			list[list[i+2]+1]=list[i+1];
			freebuf[i/OBJSIZ]=FREE;
			list[i]=0;
			//return 0;
			continue;
		}
	}
	return 1;
}
