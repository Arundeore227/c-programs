//string to integer atoi
#include <stdio.h>
int my_atoi(char *);
int main()
{
   char str[100];
   printf("Enter a number string\n");
   scanf("%[^\n]", str);
   printf("string to int is %d", my_atoi(str));
    return 0;
}

int my_atoi(char *str)
{
    int i=0, to_int=0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            to_int = to_int * 10 + (str[i] - '0');
        }
        i++;
    }
    return to_int;
}
