#include "25.queue.h"
int deq(Q_array *q, data_t *data)
{
	if(is_empty(q->front) == Q_EMPTY)
	  return Q_EMPTY;
	*data = q->array[q->front];
	q->front++;

	if(q->front > q->rear)
	{
		q->front ; 
                q->rear = -1;
	}
	return SUCCESS;
}
int is_empty(int front)
{
	if(front == -1)
	{
		return Q_EMPTY;
	}
	return 1;
}
