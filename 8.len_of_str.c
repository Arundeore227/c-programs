#include <stdio.h>
//#include<string.h>
int main() {
    char str[100];
    printf("ENter the string whose lenght you wnat to calculate\n");
    scanf("%[^\n]", str);
    int len=0;
    while(str[++len]);
    printf("len of entred string is %d\n", len);
   // printf("len of entred string is %d", strlen(str));
    return 0;
}
