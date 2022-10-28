#include <stdio.h>

int main() {
    
    //varible declaration
    int row , col, i, j;
    printf("Enter row and col for matrix array\n");  //mssge for the user
    scanf("%d %d", &row, &col);   //reading col and rows from the user

    int arr[row][col], transpose[row][col];  //declaring array of size colxrow 
    printf("Enter elemets for %d x %d matrix\n", row,col); //mssge for  the user
    
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);       //reading matrix input from the user
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];   //logic of transposing matrix
        }
    }
    printf("\n\n");
    for(i = 0; i< row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", transpose[i][j]);    //printing transposed matrix
        }
        printf("\n");
    }
    return 0;
}
