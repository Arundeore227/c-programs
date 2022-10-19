#include<stdio.h>
#include<math.h>
int my_atoi(char *str, int base);
int main()
{
	int base;
	char str[50];
	printf("Enter any base\n");
	scanf("%d", &base);

	printf("Enter any number string\n");
	scanf(" %[^\n]", str);

	printf("%d ", my_atoi(str, base));
	return 0;
}
int my_atoi(char *str, int base)
{
	int i=0, cnt=0;
	int sum =0;
	
	while(cnt != 1)
	{
		if(base == 2)
		{
			cnt++;
		}
		else if(base == 8)
		{
			cnt++;
			if(str[i] >= '0' && str[i] <= '7')
			{
	                 	sum = sum * 10 + (str[i] - '0');
			}
			printf("%d", sum);
			i++;
		}
		else if(base == 10)
		{
			cnt++;
			while(str[i])
			{
				if(str[i] >= '0' && str[i] <= '9')
				{
					sum = sum * 10 + (str[i] - '0');
				}
				i++;
			}
		}
		else if(base == 16)
		{
			
			cnt++;
		}
	}
	return sum;
}
