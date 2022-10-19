#include <stdio.h>

int main() {
    int row , col, i, j;
    printf("Enter row and col for matrix array\n");
    scanf("%d %d", &row, &col);

    int arr[row][col], transpose[row][col];
    printf("Enter elemets for %d x %d matrix\n", row,col);
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    printf("\n\n");
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
