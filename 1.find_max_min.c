#include <stdio.h>
int main() {

    int size, i,max=0, min=0;
    printf("ENter a size of the array you want to create\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d a array elements\n", size);
    for(i=0; i<size; i++)
    {
            scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 0; i < size ; i++)
    {
            if(arr[i] > max)
                max = arr[i];
            else if(arr[i] < min)
                min = arr[i];
    }
    printf("max is %d, min is %d ", max, min);
}
