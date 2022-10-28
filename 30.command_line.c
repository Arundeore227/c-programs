#include<stdio.h>
int main(int argc, char **argv)  //readig command line args from the user
{
	//variable declaration
	int i;
	printf("count of total args %d\n", argc);  //mssge for the user

	printf("arguments are : \n");

	for(i=0; i<argc; i++)
	{
		printf("%s ", argv[i]);   //logic to print command line passed args
	}
	printf("\n");
}
