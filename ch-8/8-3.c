#include<stdio.h>

main()
{
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i,count=0;
	
	printf("\n enter A's elements\n") 
	
	for(i=0; i<n; i++)
	{
		printf"(enter a[%d]=",i);
		scanf("%d",&a[i]);	
	} 
	printf("\nenter B's elements\n")

	for(i=0; i<n; i++)
	{
		printf"(enter a[%d]=",i);
		scanf("%d",&b[i]);	
	} 
	
	printf("array c is : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]+b[i]);
	}
	
}
