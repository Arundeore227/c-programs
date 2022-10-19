#include<stdio.h>
#include<stdlib.h>
typedef int data_t;


#define SUCCESS 1

typedef struct node{
	data_t data;
	struct node *link;	
}Slist;

void print_list(Slist *head);
int insert_at_last(Slist **head, data_t data);

int main()
{
	int data, option, status;
	char ch;
	Slist *head = NULL;

	do{
		printf("1-insert in last\n.   2-Print List\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("ENter the data you want to insert i SLL\n");
				scanf("%d", &data);
				status = insert_at_last(&head, data);
				status == SUCCESS? printf("DATA INSERTED SUCCESSFULLY\n"): printf("DATA INSERTION FAILURE\n");
				break;
			case 2: print_list(head);
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
		head = head->link;
	}
	putchar('\n');
}
