#include<stdio.h>
int main()
{
	//variable declaration
	int size;
	printf("Enter the size of array you want to create\n"); //mssge for the user
	scanf("%d", &size);  //reading size of the array from the user
	int arr[size];   //declaring array

	int *ptr_counter = arr;  //stroring base address of array into ptr_counter
        
	int i=0;   //decalring i loop counter

	while(i<size)    //running loop till i less size
	{
		ptr_counter++;  //each time incrementing address in ptr_cntr
		i++;    //inc loop counter
	}
	
	printf("%ld bytes memory is allocated by array of size %ld", (ptr_counter - arr)*4, (ptr_counter - arr));  //msssge for the user
}
