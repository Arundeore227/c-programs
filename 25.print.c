#include"25.queue.h"  //it will subtitue everything written in 25.queue.h

void print(Q_array q)   //function print is atking q as input nad returning nothing
{
	if(is_empty(q.front) == Q_EMPTY)  //condi to check if queue is empty or not
	{
		printf("Queue is empty\n");  //if yes printing queue is empty mssge
		return;  //returning
	}
	printf("Elements in queue are  ");   //if not printing mssge 
	while(q.front <= q.rear)     //logic to print queue elements
	{
		printf("%d",q.array[q.front]);
		(q.front)++;  //inc front pointer
	}
	putchar('\n');
}
