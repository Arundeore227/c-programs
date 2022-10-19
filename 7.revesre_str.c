#include <stdio.h>
int main() {
    char str[100], temp;
    printf("ENter the string you want to reverse\n");
    scanf("%[^\n]", str);
    int len=0, i=0;
    while(str[++len]);
    len--;
    while(len>i)
    {
        temp = str[i];
        str[i++] = str[len];
        str[len--] = temp;
    }
    printf("revser of sting is %s", str);
    return 0;
}
