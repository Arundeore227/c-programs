#include <stdio.h>
int main() {
    //varibale declaration
    int num;
    
    printf("ENter a number\n");  //mssge for the user   
    scanf("%d", &num);           //reading number from the user
    num ^= 0xff;                 //for flippin the bits xoring num with(0xff) or (-1)
    printf("number after flipping its bit %d\n", num);  //mssge 
}
