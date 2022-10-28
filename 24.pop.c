#include "24.stack.h"  //adding header file to subtitute everything written in stack.h

int pop(S_array *s, data_t *data)   //function def
{
   if(is_empty(s->top) == STACK_EMPTY)    //checking stack empty or not
   {
	   return STACK_EMPTY;   //if yes returning stack empty
   }
  
  *data = s->array[s->top];      //if not storing data into data var and deleting current data
  (s->top)--;  //dec stack pointer 
   return SUCCESS;  //returning success
}
int is_empty(int top)   //function defination 
{
	if(top == -1)   //condition for stack empty
	{ 
		return STACK_EMPTY;
	}
	return 1; //returning 1 if stack is not empty
}
