//bubule sort algorithm
#include <stdio.h>
int main() {

    int size, i, j, temp;
    printf("ENter a size of the array you want to create\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d a array elements\n", size);
    for(i=0; i<size; i++)
    {
            scanf("%d", &arr[i]);
    }
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array after sorting:  ");
    for(i=0; i<size; i++)
    {
            printf("%d ", arr[i]);
    }
}
