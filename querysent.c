#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024
#undef EOF
#define EOF 'A'
struct word{
	char *str;
	int nc;
	struct word *next_w;
};

struct sent{
	struct word w;
	struct word *head,*tail;
	int wc;
	struct sent *next_s;
};

//struct word *head,*tail;
struct sent *front,*back;

int main()
{	
	char buff[MAX];
	int c,tc=0;
	int sc=0;
	struct word *p;
	struct sent *q;
	front = (struct sent*)malloc(sizeof(struct sent));
	front->head = (struct word*)malloc(sizeof(struct word));
	front->tail = front->head;
	back = front;
	back->tail->nc=0;
	back->wc=0;
	while ((c=getchar())!=EOF&&tc<MAX)
	{
		 tc++;
		if(c==' '){
			buff[back->tail->nc++]=c;
			buff[back->tail->nc]='\0';
			back->tail->str = (char*)malloc(sizeof(back->tail->nc));
			strcpy(back->tail->str,buff);
			p = (struct word*)malloc(sizeof(struct word));//next word
			back->tail->next_w = p;
			back->tail=p;
			back->tail->nc=0;
			back->tail->next_w = NULL;
			back->wc++;
		}
		else if(c=='.'||c=='\n'){
			sc++;
			back->wc++;
			buff[back->tail->nc++]=c;
			buff[back->tail->nc]='\0';
			back->tail->str = (char*)malloc(sizeof(back->tail->nc));
			strcpy(back->tail->str,buff);
			back->tail->next_w = NULL;
			p = (struct word*)malloc(sizeof(struct word));//first word in next sent 
			q = (struct sent*)malloc(sizeof(struct sent));//next sent
			back->next_s = q;
			back = q;
			back->head = p;
			back->tail=back->head;
			back->tail->nc=0;
			back->tail->str=NULL;
			back->tail->next_w = NULL;
			back->wc=0;
			back->next_s = NULL;
			
			
		}
		else
			buff[back->tail->nc++]=c;
		
		
		
	}

	//traverse
	struct sent *temp=front;
	struct word *t = front->head;
	while(temp&&temp->next_s){
		while(t){
			printf("%s",t->str);
			t= t->next_w;
		}
		temp=temp->next_s;
		t = temp->head;
	}

	//query
	int qs,qw;
	scanf("%d %d",&qs,&qw);

	temp=front;
    for(int i=1;i<qs;i++)
    	 temp = temp->next_s;
   	t=temp->head;
    for(int i=1;i<qw;i++)
    	t=t->next_w; 
    printf("%s",t->str);
	
	free(front);
	free(back);
			
	printf("\n%lu %lu\n",sizeof(struct word),sizeof(struct sent));
	printf("%d %d\n",tc,sc);
	return 0;
}
