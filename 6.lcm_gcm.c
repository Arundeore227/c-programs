#include<stdio.h>
int my_gcd(int,int);
int my_lcm(int,int);
void main()
{
	int num1,num2;
	printf("enter 2 num numbers\n");
	scanf("%d %d",&num1,&num2);
	printf("the gcd and lcm of given number is = %d %d\n", my_gcd(num1, num2), my_lcm(num1, num2));
}

int my_gcd(int n1,int n2)
{
	if(n1==0)
		return n2;
	if(n2==0)
		return n1;
	return my_gcd(n2,n1%n2);
}

int my_lcm(int n1,int n2)
{
	int dif;
	dif=(n1>n2)?n1:n2;
	while (1)
	{
		if((dif%n1==0) && (dif%n2==0))
		{
			return dif;break;
		}
		dif++;
	}
}
