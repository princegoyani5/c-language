#include<stdio.h>
arraysum(int a[],int n)


{
	int i,sum;
	for(i=0 ;i<n; i++)
	{
		sum += a[i];
	}
	return sum;
}

arrayinput(int a[],int n)
{
	int i;
	for(i=0 ;i<n; i++)
	{
		printf("enter a[%d] : ");
		scanf("%d",&a[i]);
	}
}

void main()
{
	int n,sum;
	printf("enter length of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput (a,n);
	sum = arraysum(a,n);
	printf("sum of array is : %d",sum);
	
	
	
}
