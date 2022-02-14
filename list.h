
#undef BUFSIZ
#define BUFSIZ 1023
#undef LISTSIZ
#define LISTSIZ  (BUFSIZ/3)
#undef NIL
#define NIL (-1)

int getlist();

int addlist(int val);

int removelist(int val);

int searchlist(int val);

int traverselist();


int list[BUFSIZ];
int freebuf[LISTSIZ];
int head=NIL;
int pre_index=NIL;
