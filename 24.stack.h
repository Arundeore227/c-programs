//header file of stack_h
#ifndef STACK_H    //conditional compilation to avoid multi inclision 
#define STACK_H    //if not defined that time only defining stack_h

#include<stdio.h>  
#include<stdlib.h>

//macros
#define SUCCESS 1  
#define FAILURE 0
#define STACK_FULL -1
#define STACK_EMPTY -2
#define MAX 5

typedef int data_t;   //alising to inc readability

//declaring structure for stack
typedef struct stack
{
	data_t array[MAX];
	int top; //we want top as int only
}S_array;  //allisig the name

//function declaration
int push(S_array *S, data_t data);
int pop(S_array *S, data_t *data);
int peak(S_array *S, data_t *data);
void peep(S_array S);
int is_empty(int top);
int is_full(int top);
#endif  //ending conditional compilation
