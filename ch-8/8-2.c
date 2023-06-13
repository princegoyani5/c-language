#include<stdio.h>

main()
{
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	printf("enter array elements\n");
	
	for(i=0; i<n; i++)
	{
		printf"(enter a[%d]=",i);
		scanf("%d",&a[i]);
		sum+=a[i];
		
	}
	printf("average of an array: %d",sum/n);
}
