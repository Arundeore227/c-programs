#include <stdio.h>
int main() {
    int flag=0, num, i, j;
    printf("ENter a number\n");
    scanf("%d", &num);
    for(i = 2; i <= num/2; i++)
    {
        if(num % i==0)
        {
          for(j=2; j<=i/2; j++)
          {
            if(i%j==0)
            {
                flag =1;
                break;
            }
          }
          if(flag == 0)
            printf("%d ", i);
        }
    }
}
