#include<stdio.h>
void main()
{
	int p;
	system("color 89");
	printf("enetr array size : ");
	scanf("%d",&p);
	
	int a[p],i;
	int *b;
	
	b=&a;
	
	printf("enter array elements : \n");
	for(i=0; i<p; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",b+i);
	}
	printf("spuare of elements  :\n");
	for(i=0; i<p; i++)
	{
		printf("%d ",*(b+i)**(b+i));
	}
	
}
