#include"25.queue.h"         //it will subtitue everything written in 25.queue.h
int enq(Q_array *q, data_t data)   //fucntion defination
{
	if(is_full(q->rear) == Q_FULL)   //condition to check q is full or not
	{
		return Q_FULL;  //if yes returing queue full
	}
	if(q->front == -1)   //for first case if front is -1 have to inc front 
	{
		(q->front)++;  
	}
	(q->rear)++;   //inc rear pointer
	q->array[q->front] = data;  //assinging data
	return SUCCESS;   //returning success
}

int is_full(int rear)  //function def of is_fUll
{ 
	if(rear == MAX - 1)   //if rear == -1 then queue will be full 
		return Q_FULL;  //returning queue full
	return 1; //if not returnig queue empty
}

