#include"25.queue.h"
int enq(Q_array *q, data_t data)
{
	if(is_full(q->rear) == Q_FULL)
	{
		return Q_FULL;
	}
	if(q->front == -1)
	{
		(q->front)++;
	}
	(q->rear)++;
	q->array[q->front] = data;
	return SUCCESS;
}

int is_full(int rear)
{ 
	if(rear == MAX - 1)
		return Q_FULL;
	return 1;
}

