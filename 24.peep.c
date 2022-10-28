#include"24.stack.h"   //adding header file to subtitute everything written in stack.h
void peep(S_array s)
{
	if(is_empty(s.top) == STACK_EMPTY)   //condition to check stack empty or not
	{
          printf("Stack is empty\n");
	}
	printf("Stack elements are:- ");     
	while(s.top > -1)  //condition to print stack elem if its greter than index -1
	{
		printf("%d -> ", s.array[s.top]);   //printing stack elem
		(s.top)--;   //decrementing top pointer 
	}
	putchar('\n');  //to print new line
}
