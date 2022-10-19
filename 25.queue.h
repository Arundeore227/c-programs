#ifndef QUEUE_H
#define QUEUE_H

#include<stdio.h>
#include<stdlib.h>

#define FAILURE 0
#define SUCCESS 1
#define Q_EMPTY -1
#define Q_FULL -2
#define MAX 5

typedef int data_t;

typedef struct queue
{
	data_t array[MAX];
	int front;
	int rear;
}Q_array;

int enq(Q_array *q, data_t data);
int deq(Q_array *q, data_t *data);
void print(Q_array q);
int is_empty(int front);
int is_full(int rear);
#endif
