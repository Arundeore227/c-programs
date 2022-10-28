#include <stdio.h>
int main() {
    //variable declaration
    int flag=0, num, i, j;
    printf("ENter a number\n");   //mssge for the user
    scanf("%d", &num);   //reading input form the user
    for(i = 2; i <= num/2; i++)  //running loop half times of the number to save iteration
    {
        if(num % i==0)  //if num is divisible by i giving zero 
        {
          for(j=2; j<=i/2; j++)  //running another loop to avoid multiple divisiors 
          {
            if(i%j==0) //checkeing if i % 2 gives zero
            {
                flag = 1;  //setting the flag and breaking the loop
                break;     //this break to avaoid multiple primes
            }
          }
          if(flag == 0)  //if flag is zero
            printf("%d ", i);  //then only printing is prime
        }
    }
}
