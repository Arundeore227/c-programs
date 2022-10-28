#include"25.queue.h"

int main()
{
	//varible declaration 
	int option , data, status;
	char ch;
	Q_array q;
	q.front = -1; q.rear = -1;
	do   //do loop to give one free iteration to user as welll as do loop is used to implement menu drivin program
	{
		printf("ENter your choice\n1-ENQUE(insert data into queue)\n2-Deque(delete data into queue)\n3-print queue\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("ENter data you want to enter\n");
				scanf("%d", &data);
				status = enq(&q, data); // calling function enq and passing address of q and data as AP
				status == SUCCESS ? printf("%d data is inserted successfully\n", data) : printf("data insertion failure\n");
				break;
			case 2:
				status = deq(&q, &data);    //calling function deq and passing address of q and address of data as input
					status == SUCCESS ? printf("%d is data deleted successfully from queue\n", data) : printf("data deletion failure\n");
				break;
			case 3:   
				print(q);  //calling function print and passing q as AP
					break;
			default:  printf("Invalide choice\n");  //if user enters anything than 1-3 then printing invalid choice mssge
		}
		printf("ENter or y or Y to continuee\n");
		scanf(" %c", &ch);  //reading char from user
	}while(ch == 'y' || ch == 'Y');  //if user enters y or Y then again this interface shown to the user
}
