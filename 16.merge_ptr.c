#include<stdio.h>

void main()
{
	//varible declaration
	int size1, size2, *ptr;
        
	//mssge for the user
	printf("Enter size1 for array1  : ");
	scanf("%d", &size1);                       //reading input from the user

	printf("Enter size2 for array2  : ");      //mssge for the user
	scanf("%d", &size2);                       //reading input from the user
 
	int n, itr;  //varibale declaration  
	int arr1[size1], arr2[size2];  //declaring array of size

	printf("enter %d elements for array1 \n", size1);   //mssge for the user
	
	for(itr = 0;itr < size1; itr++)
		scanf("%d",&arr1[itr]);        //reading array1 elements from the user

	printf("enter %d elements for array2 \n", size2);   //mssge for the user
	for(itr = 0;itr < size2; itr++)
		scanf("%d",&arr2[itr]);        //reading array2 elements from the user

	ptr = &arr2[0];  //assigning base address of array2 to ptr

	itr = 0, n=size1;   
	while (itr < size1)      //running loop till size 1
	{
		*(arr1 + n++) = *(ptr)++;    //assigning value as well incrementing address
		itr++;
	}

	for(itr = 0; itr < (size1 + size2); itr++)   //loop to print merged array
		printf("%d ",arr1[itr]);
}

