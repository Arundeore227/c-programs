#include"25.queue.h"

void print(Q_array q)
{
	if(is_empty(q.front) == Q_EMPTY)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Elements in queue are  ");
	while(q.front <= q.rear)
	{
		printf("%d",q.array[q.front]);
		(q.front)++;
	}
	putchar('\n');
}
