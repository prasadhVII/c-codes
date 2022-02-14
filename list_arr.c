#include <stdio.h>
#include <stdlib.h>
#include "list.h"

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
    printf("\n0-EXIT\n1-INSERT LIST\n2-DELETE LIST\n3-SEARCH LIST\n4-TRAVERSE LIST\n");
    while(TRUE){
        printf("enter option :");
        scanf("%d",&operation);
        switch(operation){
             case EXIT:
                    exit(0);
             case INSERT:
                    printf("enter :");
                    scanf("%d",&val);
                    (addlist(val)==-1)?printf("error:no space\n"):FALSE;
                    break;
             case DELETE:
                    printf("enter :");
                    scanf("%d",&val);
                    (removelist(val)==-1)?printf("error:list is empty\n"):FALSE;
                    break;
             case SEARCH:
                     printf("enter : ");
                     scanf("%d",&val);
                     (searchlist(val)==1)?printf("error:%d not found\n",val):FALSE;
                     break;
             case TRAVERSE:
                     (traverselist()==-1)?printf("error:list is empty\n"):FALSE;
                     break;
             default:
             		printf("error:enter valid option\n");
                    continue;
         }
    }
       
	return 0;
}
