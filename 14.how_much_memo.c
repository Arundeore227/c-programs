#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size of array you want to create\n");
	scanf("%d", &size);
	int arr[size];

	int *ptr_counter = arr;
        
	int i=0;

	while(i<size)
	{
		ptr_counter++;
		i++;
	}
	
	printf("%ld bytes memory is allocated by array of size %ld", (ptr_counter - arr)*4, (ptr_counter - arr));
}
