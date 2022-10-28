//bubule sort algorithm
#include <stdio.h>
int main() {

    //variable declaration
    int size, i, j, temp;
    printf("ENter a size of the array you want to create\n"); //mssge for the user
    scanf("%d", &size);  //reading size
    int arr[size];  //declaring variable size array
    printf("Enter %d a array elements\n", size);  //mssge for the user
    //reading array input from the suer
    for(i=0; i<size; i++)
    {
            scanf("%d", &arr[i]);
    }
    //using bubble sort algorithm to sort the array
    for(i = 0; i < size - 1; i++)  //running loop till 0 to size - 1
    {
        for(j = 0; j < size-i-1; j++)  //running loop till 0 to size-i-1 times
        {
            if(arr[j] > arr[j+1])  //checking if current elem is greater than next elem 
            {
                temp = arr[j];  //if yes using swapping logic to swap array elements
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array after sorting:  ");  //mssge for user
    for(i=0; i<size; i++)
    {
            printf("%d ", arr[i]);  //printing array after sorting
    }
}
