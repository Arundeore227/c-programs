#include "25.queue.h"  //it will subtitue everything written in 25.queue.h
int deq(Q_array *q, data_t *data)           //function defination
{
	if(is_empty(q->front) == Q_EMPTY)  //condition to check q is empty or not
	  return Q_EMPTY;                //if yes returning queqe empty
	*data = q->array[q->front];     //if not storig data into data var and 
	q->front++;  //incrementing front

	if(q->front > q->rear)   //if front pointer is greter than rear pointer 
	{
		q->front = q->rear = -1;        //queue pointer reached to max and setting it into -1 to use queqe again
	}
	return SUCCESS;  //returning succes
}
int is_empty(int front)  //function def
{
	if(front == -1)   //condition to check queue is empty or not
	{
		return Q_EMPTY;  //if yes returning queue empty
	}
	return 1;
}
