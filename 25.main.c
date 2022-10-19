#include"25.queue.h"

int main()
{
	int option , data, status;
	char ch;
	Q_array q;
	q.front = -1; q.rear = -1;
	do
	{
		printf("ENter your choice\n1-ENQUE(insert data into queue)\n2-Deque(delete data into queue)\n3-print queue\n");
		scanf("%d", &option);
		switch(option)
		{
			case 1: printf("ENter data you want to enter\n");
				scanf("%d", &data);
				status = enq(&q, data);
				status == SUCCESS ? printf("%d data is inserted successfully\n", data) : printf("data insertion failure\n");
				break;
			case 2:
				status = deq(&q, &data);
					status == SUCCESS ? printf("%d is data deleted successfully from queue\n", data) : printf("data deletion failure\n");
				break;
			case 3:   
				print(q);
					break;
			default:  printf("Invalide choice\n");
		}
		printf("ENter or y or Y to continuee\n");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y');
}
