#include <stdio.h>
//#include<string.h>
int main() {
    //var declaration
    char str[100];
    printf("ENter the string whose lenght you wnat to calculate\n"); //mssge for the user
    scanf("%[^\n]", str); //reading string from the user
    //var declaration
    int len=0;
    while(str[++len]);  //logic to count len of the string
    printf("len of entred string is %d\n", len); //printing len of the string
   // printf("len of entred string is %d", strlen(str));
    return 0;
}
