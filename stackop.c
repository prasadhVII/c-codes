#include "mysort.h"
#include <stdio.h>

#undef BUFSIZ
#define BUFSIZ 100

static int stack[BUFSIZ];
static int top = -1;

enum 
  {
      FALSE,
      TRUE
  };

  int  push(int val)
  {
  	int stack_full();
      if(stack_full())
          return FALSE;
      else
		  stack[++top]=val;
	return TRUE;
  }


  int pop()
  {
  	int stack_empty();
      if(stack_empty())
          return FALSE;
      else
          return stack[top--];
  }

  int stack_full()
  {
      if(top==BUFSIZ)
          return TRUE;
      else
          return FALSE;
  }


  int stack_empty()
  {
      if(top==-1)
          return TRUE;
      else
          return FALSE;
  }


void traversestack()
{
	if(stack_empty())
		printf("stack empty\n");
	else
	    traverse_arr(stack,top+1);
 }


 int searchstack(int val)
 {	
 	return (search_arr(stack,val,top+1)!=0)?FALSE:TRUE;
 }
