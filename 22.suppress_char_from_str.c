#include<stdio.h>
char *suppress_in_string(char *, char);
int main()
{
	char str[100], ch;
	printf("Enter a string\n");
	scanf("%[^\n]", str);
   
	printf("ENter a char you want to suppress from given string\n");
	scanf(" %c", &ch);
	//suppress_in_string(str, ch);
       printf("string after supressinng\n%s\n", suppress_in_string(str, ch));
}

char *suppress_in_string(char *str, char ch)
{
	int i=0, j=0;

	for(i=0; str[i]; i++)
	{
		if(str[i] == ch)
		{
		   for(j=i; str[j]; j++)
		   {
			   str[j] = str[j+1];
		   }
	          i--;
		}
	}
	return str;
}

