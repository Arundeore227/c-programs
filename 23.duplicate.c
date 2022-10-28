#include<stdio.h>
#include<string.h>
int main()
{
	//varibale declaration
	char str[100];
	int i, j;

	printf("ENter a string\n");    //mssge for the user
	scanf("%[^\n]", str);          //reading string from the user   

	for(i=0; i < strlen(str); i++)    //running outer loop till len 
	{
		for(j=i+1; j < strlen(str);)   //running inner loop till len of str
		{
			if(str[i] == str[j])       //cond to check duplicate elem in loop
			{
				for(int k=j; str[k]; k++)       //if true running one loop assiging current index to k and running loop till last char
				{ 
					str[k] = str[k+1];   //logic to delete elem in string
				}
			}
			else 
			{
				j++;   //inc j inner loop counter
			}

		}
	}
	printf("%s\n", str);  //printing string
}
