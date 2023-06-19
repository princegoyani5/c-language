#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter column size : ");
	scanf("%d",&c);
	
	int a[r],[c,]i,b;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<c; j++)
		{
		
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j] > b)
			{
				b = a[i][j];
			}
		}
   }  
   printf("largest elements : %d",b);
	

	
}
