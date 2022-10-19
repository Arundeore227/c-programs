#include <stdio.h>
int main() {
    int num;
    printf("ENter a number\n");
    scanf("%d", &num);
    num ^= 0xff;
    printf("number after flipping its bit %d\n", num);
}
