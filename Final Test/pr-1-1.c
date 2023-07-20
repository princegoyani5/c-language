#include<stdio.h>

main()
{
	int x[3][3],sum=0;
	
	int i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("x[%d][%d] : ",i,j);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}		


	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i==j || (i==0 && j==2)||(i==1 && j==1)||(i==2 && j==0))
			{
				printf("%d ",x[i][j]);
				sum += x[i][j];
			}
			printf("\n");
		}
		
	}
	printf("sum : %d",sum);
}
