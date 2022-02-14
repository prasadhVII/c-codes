#include <stdio.h>
#include <stdlib.h>
#include "mysort.h"
#include "stack.h"

enum bool
{
	FALSE,
	TRUE
};

enum op
{
	EXIT,INSERT,DELETE,SEARCH,TRAVERSE
};

int main()
{
	short int operation;
	int val;
	printf("0-EXIT\n1-INSERT\n2-DELETE\n3-SEARCH\n4-TRAVERSE\n");
	while(TRUE){
		printf("enter option :");
		scanf("%d",&operation);
		switch(operation){
			case EXIT:
				exit(0);
			case INSERT:
				printf("enter :");
				scanf("%d",&val);
				(push(val)==FALSE)?printf("cant push :stack full\n"):TRUE;
				break;
			case DELETE:
				(pop()==FALSE)?printf("cant pop : empty stack\n"):TRUE;
				break;
			case SEARCH:
				printf("enter : ");
				scanf("%d",&val);
				(searchstack(val)==FALSE)?printf("%d not found\n",val):printf("%d found\n",val);
				break;
			case TRAVERSE:
				traversestack();
				break;
			default:
			continue;	
		}
	}
	return 0;
}
