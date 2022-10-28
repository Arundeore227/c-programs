#include "24.stack.h"     //adding header file to subtitute everything written in stack.h

int push(S_array *s, data_t data)   //fucntion def
{
   if(is_full(s->top) == STACK_FULL)    //condition to check stack full
   {
	   return STACK_FULL;  //if full returing stack full
   }
   (s->top)++;  //if not incrementing stack pointer 
   s->array[s->top] = data;  //adding data 
   return SUCCESS;   //returing success
}
int is_full(int top)   //function to check stack is full or not
{
	if(top == MAX-1)   //to stack full
	{ 
		return STACK_FULL; //yes retruing stack full
	}
	return 1;
}
