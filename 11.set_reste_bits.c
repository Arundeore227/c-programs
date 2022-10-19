#include <stdio.h>
//#include<string.h>
int main() {
    int num, pos, choice;
    printf("ENter a number\n");
    scanf("%d", &num);

    printf("Enter the pos\n");
    scanf("%d", &pos);

    printf("1: set\n2: reset(clear)\n \nENter your choice\n ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("%d", num |= (1<<pos));
        break;
        case 2: printf("%d", num & ~(1<<pos));
        break;
        default :printf("Please enter valid input\n");
    }
}
