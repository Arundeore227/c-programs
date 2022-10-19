#include "24.stack.h"

int push(S_array *s, data_t data)
{
   if(is_full(s->top) == STACK_FULL)
   {
	   return STACK_FULL;
   }
   (s->top)++;
   s->array[s->top] = data;
   return SUCCESS;
}
int is_full(int top)
{
	if(top == MAX-1)
	{ 
		return STACK_FULL;
	}
	return 1;
}
