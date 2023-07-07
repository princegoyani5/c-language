#include<stdio.h>
void main()
{
	int a,b;
	
	printf("enetr the value of a : ");
	scanf("%d",&a);
	printf("enetr the value of b : ");
	scanf("%d",&b);
	
	
	int * a1,*a2;
	a1=&a;
	a2=&b;
	
	printf("before swap :\n a: %d \n b:%d \n",*a1,*a2);
	*a1=*a1+*a2;
	*a2=*a1+*a2;
	*a1=*a1+*a2;
	
	printf("after swap :\n a: %d \n b:%d \n",*a1,*a2);
	
			
}
