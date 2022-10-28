#ifndef QUEUE_H   //conditional compilation to avoid multiple inclusion of headern file
#define QUEUE_H   //if not defeined true then defining queue_h
//header files
#include<stdio.h>
#include<stdlib.h>

//macros
#define FAILURE 0
#define SUCCESS 1
#define Q_EMPTY -1
#define Q_FULL -2
#define MAX 5
//alising user readability 
typedef int data_t;

// structure for queue
typedef struct queue
{
	data_t array[MAX];
	int front;
	int rear;
}Q_array;  //alising name of struct queue into Q_array

//funciton decalaration
int enq(Q_array *q, data_t data);
int deq(Q_array *q, data_t *data);
void print(Q_array q);
int is_empty(int front);
int is_full(int rear);
#endif  //ending connditional compilation
