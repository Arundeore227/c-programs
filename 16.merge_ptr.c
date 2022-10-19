#include<stdio.h>

void main()
{
	int size1, size2, *ptr;

	printf("Enter size1 for array1  : ");
	scanf("%d", &size1);

	printf("Enter size2 for array2  : ");
	scanf("%d", &size2);

	int n, itr;
	int arr1[size1], arr2[size2];

	printf("enter %d elements for array1 \n", size1);
	for(itr = 0;itr < size1; itr++)
		scanf("%d",&arr1[itr]);

	printf("enter %d elements for array2 \n", size2);
	for(itr = 0;itr < size2; itr++)
		scanf("%d",&arr2[itr]);

	ptr = &arr2[0];

	itr = 0, n=size1;
	while (itr < size1)
	{
		*(arr1 + n++) = *(ptr)++;
		itr++;
	}

	for(itr = 0; itr < (size1 + size2); itr++)
		printf("%d ",arr1[itr]);
}

