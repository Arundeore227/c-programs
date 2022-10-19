#include"24.stack.h"
int peak(S_array *s, data_t *data)
{
	if(is_empty(s->top) == STACK_EMPTY)
	{
		return STACK_EMPTY;
	}

	*data = s->array[s->top];
	return SUCCESS;
}
