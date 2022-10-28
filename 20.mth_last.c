#include<stdio.h>
#include<stdlib.h>
typedef int data_t;   //allicing for readability


#define SUCCESS 1   //macros

typedef struct node{    //self ref structure of node for creating SLL
	data_t data;
	struct node *link;	
}Slist;  //alising readabilty simplisity

void print_list(Slist *head);   //function declaration
int insert_at_last(Slist **head, data_t data);   //function declaration
Slist *find_mth_node_from_the_last(Slist*, int, int*); //function declaration

int main()
{
	//variable declaration
	int data, option, status;
	char ch;
	int n, res;
	Slist *head = NULL;

	do{
		printf("1-insert in last\n2-find mth last\n 3-Print List\n");
		scanf("%d", &option);
		switch(option)                                                //switch case
		{
			case 1: printf("ENter the data you want to insert i SLL\n");
				scanf("%d", &data);
				status = insert_at_last(&head, data);     //calling fun insert_at_last and printing address of head and data as AP
				status == SUCCESS? printf("DATA INSERTED SUCCESSFULLY\n"): printf("DATA INSERTION FAILURE\n");
				break;
			case 2: printf("ENter the num you want to from last\n");
				scanf("%d", &n);
			        Slist *temp = find_mth_node_from_the_last(head, n, &res);   //calling find mth and passing head , n, &res as AP
			        if(temp)
			       	printf("%d is the nth data in sll\n", res);
			        break;	
			case 3: print_list(head);
		}
		printf("Do yo want to continue y or Y\n");
		scanf(" %c", &ch);	
	}while(ch == 'y' || ch == 'Y');
	return 0;
}
int insert_at_last(Slist **head, data_t data)
{
	//creating new node
	Slist *new = malloc(sizeof(Slist));
	if(new == NULL)
	{
		printf("Memory allocation failure\n");
		return 0;
	}
	//upadting the node values
	new->data = data;
	new->link = NULL;

	if(*head == NULL)
	{
		*head = new;
		return SUCCESS;
	}
	//list is not empty temp pointer to travers till last node
	Slist *temp = *head;
	while(temp -> link != NULL)
		temp = temp -> link;
	temp ->link =new;
	return SUCCESS;
}
void print_list(Slist *head)
{
	if(head == NULL)
	{
		printf("List empty\n");
		return ;
	}
	printf("List elements are : ");
	while(head)
	{
		printf("%d -> ", head->data);
		head = head->link;   //moving to next node
	}
	putchar('\n');
}

Slist *find_mth_node_from_the_last(Slist *head, int n, int *res)
{
	if(head == NULL)
		return NULL;
	int count =0;
	Slist *temp = head;  //creating temp node and assining address of head
	while(head != NULL)  //running loop till NULL
	{
		head = head->link;     //moving to next node
		if(count < n)    //cheking if cnt less than or n or not if yes
			count++;   //inc count
		else
			temp = temp->link;  //if no incrementing temp add
	}
	if(n>count)
		return NULL;
	*res = temp->data;
	return temp;
}
