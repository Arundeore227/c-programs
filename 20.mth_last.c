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
Slist *find_mth_node_from_the_last(Slist*, int, int*);

int main()
{
	int data, option, status;
	char ch;
	int n, res;
	Slist *head = NULL;

	do{
		printf("1-insert in last\n2-find mth last\n 3-Print List\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("ENter the data you want to insert i SLL\n");
				scanf("%d", &data);
				status = insert_at_last(&head, data);
				status == SUCCESS? printf("DATA INSERTED SUCCESSFULLY\n"): printf("DATA INSERTION FAILURE\n");
				break;
			case 2: printf("ENter the num you want to from last\n");
				scanf("%d", &n);
			        Slist *temp = find_mth_node_from_the_last(head, n, &res);
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
		head = head->link;
	}
	putchar('\n');
}

Slist *find_mth_node_from_the_last(Slist *head, int n, int *res)
{
	if(head == NULL)
		return NULL;
	int count =0;
	Slist *temp = head;
	while(head != NULL)
	{
		head = head->link;
		if(count < n)
			count++;
		else
			temp = temp->link;
	}
	if(n>count)
		return NULL;
	*res = temp->data;
	return temp;
}
