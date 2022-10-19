#include<stdio.h>
int main(int argc, char **argv)
{
	int i;
	printf("count of total args %d\n", argc);

	printf("arguments are : \n");

	for(i=0; i<argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
