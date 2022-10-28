#include <stdio.h>
int main() {
    //variable declaration
    char str[100], temp;
    //mssge for the user
    printf("ENter the string you want to reverse\n");
    scanf("%[^\n]", str);  //reading string from the user
    //variable declaration
    int len=0, i=0;
    
    while(str[++len]);  //logic to count len of str
    len--;  //decrementing len by one beacuse index start from 0
    while(len>i)  //checking if len is greater than i
    {
        temp = str[i];     //logic to reverse the string
        str[i++] = str[len];
        str[len--] = temp;
    }
    printf("revser of sting is %s", str); //printing reversed string
    return 0;
}
