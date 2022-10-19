#include"24.stack.h"
int main()
{
	int option, status, data;
	char ch;
	S_array s;
	s.top = -1;

	do
	{
		printf("Enter your choice\n1- PUSH\n2-POP\n3-PEAK\n4-PEEP\n");
			scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("Enter the data u need to PUSH\n");
				scanf("%d", &data);
				status = push(&s, data);
				status == SUCCESS ? printf("%d data is inserted into stack successfully\n", data):printf("DAta insertion failure\n");
				break;
			case 2: status = pop(&s, &data);
				status == SUCCESS ? printf("%d data is removed from stack successfully\n", data): printf("data removing failure\n");
				break;
			case 3: status = peak(&s, &data);
				status == SUCCESS ? printf("%d is the data at the top of the stack \n", data): printf("data fetching failure\n");
				break;
			case 4: peep(s);
				break;
			default: printf("IN valid option\n");
		}	      
		printf("Do you want to continue if yes press y OR Y if no press any key\n");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y');
	return 0;
}

