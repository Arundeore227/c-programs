#include <stdio.h>
int main() {
    //varible declaration
    int num, pos, choice;
    printf("ENter a number\n");   //mssge for the user
    scanf("%d", &num);        //reading number from user

    printf("Enter the pos\n");   //mssge for the user
    scanf("%d", &pos);           //reading pos form the user

    printf("1: set\n2: reset(clear)\n \nENter your choice\n ");  //mssge for the user
    scanf("%d", &choice);   //i have appied switch statement here for user convinenece

    switch(choice)          //switch statement to check users choice
    {
        case 1: printf("%d", num |= (1<<pos));       //logic to set bit in number using |
        break;                                       //break is to avoid fall through
        case 2: printf("%d", num & ~(1<<pos));       //logic to clear bit in number
        break;
        default :printf("Please enter valid input\n"); //mssge if user eneter fuzzy choice or invalid choice 
    }
}
