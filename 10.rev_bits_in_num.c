//reverse bits of a integer
#include <stdio.h>
int main() {
    int num, rev_bits=0;
    printf("ENter a number\n");
    scanf("%d", &num);
    while(num>0)
    {
        rev_bits = rev_bits << 1;
        if(num & 1 == 1)
          rev_bits = rev_bits ^ 1;
        num = num >> 1;
    }
    printf("%d", rev_bits);
}
