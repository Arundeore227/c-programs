//string to integer atoi
#include <stdio.h> 
int my_atoi(char *);   //function declaration
int main()
{
   //var declaration
   char str[100];  
   printf("Enter a number string\n");    //mssge for the user
   scanf("%[^\n]", str);                 //reading string from the user
   printf("string to int is %d", my_atoi(str)); //calling fun and print func returned res 
    return 0;
}

int my_atoi(char *str)  //function defination of my_atoi
{
   //var declaration
    int i=0, to_int=0;
   
   //running loop till last NULL
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')        //checking if current str index value(elem) is between '0' to '9' or not if yes
        {
            to_int = to_int * 10 + (str[i] - '0');   //converting it into int
        }
        i++;  //incremeting loop counter
    }
    return to_int;   //returning int eq or string
}
