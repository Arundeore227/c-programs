//nth bit set using funtion
#include <stdio.h>
int is_nth_bit_set_from_left(int number, int n_th_bit);  //function prototype 
int main() {
    //varibale declaration
    int number, n_th_bit, res;

    printf("ENter a number\n");   //mssge for the user
    scanf("%d", &number);         //reading number from the user
    printf("Enter nth bit you wqnt to check\n");  //mssge for the user
    scanf("%d", &n_th_bit);                     //reading nTh bit from the user
    res = is_nth_bit_set_from_left(number,n_th_bit);  //calling function is_nth_bit_set_from_left() and passing number, n_th_bit as Actual parameter and callection function returned result into res variable 
    if(res > 0)  //checking if res greater than 0 if yes
       printf("nth bit of %d is set\n", number);  //printing mssge
    else
       printf("nth bit of %d is not set\n", res);  //if not, not set mssge

}
int is_nth_bit_set_from_left(int number, int n_th_bit)   //fun is_nth_bit_set_from_left is def in which number, and nth_bit is formal param which is returing int
{
    return (number & (1<<n_th_bit));   //logic to check bit is set or not
}
