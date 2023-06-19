#include<stdio.h>
main()
{
	int r,c,row,col;
	
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter column size : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum,sum2;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<c; j++)
		{
		
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	printf("enter row number : ");
	scanf("%d",&row);
	
	printf("elements of row : ")
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i == row)
			{
				printf("%d ",a[i][j]);
				sum += a[i][j];
			}
		}
   }
   
   printf("\nsum of %d row is : %d",row,sum); 
   
   printf("enter Column number : ");
	scanf("%d",&col); 
   for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(j == col)
			{
				printf("%d ",a[i][j]);
				sum2 += a[i][j];
			}
		}
   }  
   
	printf("\nsum of %d Column is : %d",col,sum2);

	
}
