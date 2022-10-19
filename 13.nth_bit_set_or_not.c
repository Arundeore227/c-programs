//nth bit set using funtion
#include <stdio.h>
int is_nth_bit_set_from_left(int number, int n_th_bit);
int main() {
    int number, n_th_bit, res;

    printf("ENter a number\n");
    scanf("%d", &number);
    printf("Enter nth bit you wqnt to check\n");
    scanf("%d", &n_th_bit);
    res = is_nth_bit_set_from_left(number,n_th_bit);
    if(res > 0)
       printf("nth bit of %d is set\n", number);
    else
       printf("nth bit of %d is not set\n", res);

}
int is_nth_bit_set_from_left(int number, int n_th_bit)
{
    return (number & (1<<n_th_bit));
}
