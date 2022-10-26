#include <stdio.h>
int main() {

    //varible declaration
    int size, i,max=0, min=0;
 
    printf("ENter a size of the array you want to create\n");  //mssge for the user
    scanf("%d", &size);  //reading user input how much sized he want t create
    int arr[size];   //declaring array of size
    printf("Enter %d a array elements\n", size);    //mssge
    
    for(i=0; i<size; i++) 
    {
            scanf("%d", &arr[i]);       //reading array input from  the user
    }
    max = min = arr[0];    //storing 1st elem to max, min for comparing with remaing elem in array
    
    for(i = 0; i < size ; i++)      //running loop till 0 to size(size-1)
    {
            if(arr[i] > max)          //checking if current array elem is greter than max if yes 
                max = arr[i];         //stroing it into max (upating max) with current elem.
            else if(arr[i] < min)     //checking if current array elem is smaller than min if yes 
                min = arr[i];         //stroing it into min (upating max) with current elem.
    }
    printf("max is %d, min is %d ", max, min);  //printing min and max
}
