#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, j;

	printf("ENter a string\n");
	scanf("%[^\n]", str);

	printf("%ld\n", strlen(str));

	for(i=0; i < strlen(str); i++)
	{
		for(j=i+1; j < strlen(str);)
		{
			if(str[i] == str[j])
			{
				for(int k=j; str[k]; k++)
				{ 
					str[k] = str[k+1];
				}
			}
			else 
			{
				j++;
			}

		}
	}
	printf("%s\n", str);
}
