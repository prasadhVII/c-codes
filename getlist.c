#undef BUFSIZ
#define BUFSIZ 1023
#undef LISTSIZ
#define LISTSIZ  (BUFSIZ/3)

#undef NIL
#define NIL (-1)
#undef OBJSIZ
#define OBJSIZ 3
#undef USED
#define USED 1
#undef FREE
#define FREE 0

int getlist()
{
	extern int list[];
	extern int freebuf[];
	extern int head;
	int index;
	for (int i=0;i<LISTSIZ;i++){
		if(freebuf[i]==FREE){
			freebuf[i]= USED;
			index = i*OBJSIZ;
			list[index+1]=NIL;
			list[index+2]=NIL;
			if(head==NIL)
				head = index;
			return index;
		}
	}
	return -1;
}
