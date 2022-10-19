#include "24.stack.h"

int pop(S_array *s, data_t *data)
{
   if(is_empty(s->top) == STACK_EMPTY)
   {
	   return STACK_EMPTY;
   }
  
  *data = s->array[s->top];
  (s->top)--;
   return SUCCESS;
}
int is_empty(int top)
{
	if(top == -1)
	{ 
		return STACK_EMPTY;
	}
	return 1;
}
