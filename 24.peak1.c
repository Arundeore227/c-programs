#include"24.stack.h"  //adding header file to subtitute everything written in stack.h
int peak(S_array *s, data_t *data)  //func def
{
	if(is_empty(s->top) == STACK_EMPTY)   //condition to check stack is empty or not
	{
		return STACK_EMPTY;   //if yes returning stack_empty
	}

	*data = s->array[s->top];   //if no reading top elem data and storing into data var
	return SUCCESS;  //returning success opr successfull
}
