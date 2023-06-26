#include<stdio.h>
void divis()
{
	int a;
	
	printf("enter number: ");
	scanf("%d",&a);
	
	if(a%3 == 0 && a%5 == 0)
	{
		printf("the given number is ivisible by both 3 and 5");
	}
	else
	{
			printf("the given number is not divisible  by both 3 and 5");
	}
}
	
void main()
{
   divis();
}
