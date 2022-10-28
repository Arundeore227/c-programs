#include <stdio.h>
int main() {
    
    //variable declaration
    int n, ncr, i, j, k;
    printf("ENter a num\n");   //mssge for the user
    scanf("%d", &n);           //reading input from the user

    for(i=0; i<n; i++)     //ruuning nested loop till n
    {
        for(j=1; j<n-i; j++)
        {
            printf(" ");     //logic to print spaces
        }
        for(k=0; k<=i; k++)   
        {
            if(i==0 || k==0)
            {
                ncr = 1;
                printf("%d ",  ncr);  //logic for printing first and last digit in triangle
            }
            else
            {
                ncr = ncr *(i-k+1)/k;   //logic to print middle all elems expect first and last
                printf("%d ", ncr);
            }
        }
        printf("\n");  //printing to new line
    }
}
