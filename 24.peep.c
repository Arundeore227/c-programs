#include"24.stack.h"
void peep(S_array s)
{
	if(is_empty(s.top) == STACK_EMPTY)
	{
          printf("Stack is empty\n");
	}
	printf("Stack elements are:- ");
	while(s.top > -1)
	{
		printf("%d -> ", s.array[s.top]);
		(s.top)--;
	}
	putchar('\n');
}
