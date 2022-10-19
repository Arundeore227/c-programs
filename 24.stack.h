#ifndef STACK_H
#define STACK_H

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 1
#define FAILURE 0
#define STACK_FULL -1
#define STACK_EMPTY -2
#define MAX 5

typedef int data_t;
typedef struct stack
{
	data_t array[MAX];
	int top; //we want top as int only
}S_array;

int push(S_array *S, data_t data);
int pop(S_array *S, data_t *data);
int peak(S_array *S, data_t *data);
void peep(S_array S);
int is_empty(int top);
int is_full(int top);
#endif
