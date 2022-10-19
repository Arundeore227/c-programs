#include <stdio.h>
int main() {

    int n, ncr, i, j, k;
    printf("ENter a num\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            printf(" ");
        }
        for(k=0; k<=i; k++)
        {
            if(i==0 || k==0)
            {
                ncr = 1;
                printf("%d ", ncr);
            }
            else
            {
                ncr = ncr *(i-k+1)/k;
                printf("%d ", ncr);
            }
        }
        printf("\n");
    }
}
