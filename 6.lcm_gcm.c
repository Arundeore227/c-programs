#include<stdio.h>
int my_gcd(int,int); //function declaration
int my_lcm(int,int); //function declaration
void main()
{
	//variable decalaration
	int num1,num2;
	printf("enter 2 num numbers\n");     //mssge for the suer
	scanf("%d %d",&num1,&num2);          //reading num1 and num2 from the user
	printf("the gcd and lcm of given number is = %d %d\n", my_gcd(num1, num2), my_lcm(num1, num2)); //calling my_gcd and my_lcm funciton and printion res
}

int my_gcd(int n1,int n2)     //function def of my_gcd
{
	if(n1==0)  //base codition control recursion
		return n2;
	if(n2==0)  //base codition control recursion
		return n1;
	return my_gcd(n2,n1%n2); //base codition control recursion
}

int my_lcm(int n1,int n2)  //function def of my_lcm
{
	//variable declaration
	int dif; 
	dif=(n1>n2)?n1:n2;  //condition  to find largest between two using ternery operator
	while (1)  //infinite loop
	{
		if((dif%n1==0) && (dif%n2==0))   //checking condition if true
		{
			return dif;break;  //returing diff and breaking the loop
		}
		dif++;  //if not incrementing diff
	}
}
