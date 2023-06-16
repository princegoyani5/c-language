#include<stdio.h>
main()

{
	int r,c:
		
		printf("enter number of row");
		scanf("%d",&r);
		printf("enter number of column");
		scanf("%d",&c);
		
		int a[r][c],b[r][c],i,j,sum=0;
		
		for(i=0; i<r; i++)
			{
				for(j=0; j<c; j++)
				{
					printf("enter a[%d][%d] :",i,j);
					scanf("%d",&a[i][j]);
					sum +=a[i][j]
					
				}
			}
			printf("avrege : %d",sum/(r*c));
			
		
		
		 
}
