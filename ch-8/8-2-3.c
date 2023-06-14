#include<stdio.h>

main()
{
	int n;
	
	printf("enter number of array : ");
	scanf("%d",&n);
	
	int a[n],b[n],i;
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
		b[i] = a[i] * a[i];
		
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\t[%d] : %d\n",i,a[i],i,b[i]);
	}
}
