//reverse bits of a integer
#include <stdio.h>
int main() {
    //varibale declaration
    int num, rev_bits=0;
    
    printf("ENter a number\n");  //mssge for the user
    scanf("%d", &num);      //reading user input
    
    while(num>0)            //running loop till num greater than 0
    {
        rev_bits = rev_bits << 1;    //left shifting bit and storing res into rev_bits variable
        if(num & 1 == 1)             //checking if num&1 = 1 if yes
          rev_bits = rev_bits ^ 1;   //xoring bits
        num = num >> 1;              //right shift to delete lsb(right most bit) in num
    }
    printf("%d", rev_bits);         //printing rev bit
}
