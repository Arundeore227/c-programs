#include<stdio.h>
#include<stdlib.h>
typedef int data_t;     //alising int to data_t for convenience and readability


#define SUCCESS 1    //macros 

typedef struct node{     //defining self referencing struct node
	data_t data;
	struct node *link;	
}Slist;   //alising name struct node as Slist

void print_list(Slist *head);                  //function prototype
int insert_at_last(Slist **head, data_t data); //function prototype

int main()             
{
	//varible declaration
	int data, option, status;
	char ch;
	Slist *head = NULL;

	do{
		printf("1-insert in last\n.   2-Print List\n");       //mssge for the user
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("ENter the data you want to insert i SLL\n");
				scanf("%d", &data);
				status = insert_at_last(&head, data);      //calling function insert_at_last passing address of head , data and collection res into status variable
				status == SUCCESS? printf("DATA INSERTED SUCCESSFULLY\n"): printf("DATA INSERTION FAILURE\n");   //using condition using ternery operator
				break;
			case 2: print_list(head);  //calling print_list and passing head
		}
		printf("Do yo want to continue y or Y\n");
		scanf(" %c", &ch);	
	}while(ch == 'y' || ch == 'Y');
	return 0;
}
int insert_at_last(Slist **head, data_t data)          //function def
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
