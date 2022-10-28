#include<stdio.h>
char *suppress_in_string(char *, char); //fucntion declaration
int main()
{
	//variable declaration
	char str[100], ch;
	printf("Enter a string\n");  //mssge for the user
	scanf("%[^\n]", str);    //reading string from the user
   
	printf("ENter a char you want to suppress from given string\n");  //mssge for the user
	scanf(" %c", &ch);    //reading char from the user
       printf("string after supressinng\n%s\n", suppress_in_string(str, ch)); //calling fun suppress_in_string and passing str and ch as AP and printing function ret res
}

char *suppress_in_string(char *str, char ch)   //function def
{
	//var declaration
	int i=0, j=0;

	for(i=0; str[i]; i++)     //running outer loop till last char
	{
		if(str[i] == ch)   //if char is equal to current str char
		{
		   for(j=i; str[j]; j++)   //ruuning inside loop from matched found char in string 
		   {
			   str[j] = str[j+1];  // deleting found char from the string
		   }
	          i--;  //dec counter beacuse dont miss any sub seq chars
		}
	}
	return str;  //returning str
}

