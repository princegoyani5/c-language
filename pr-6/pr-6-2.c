#include<stdio.h>
main()
{
	char a[20];
	int i,j,count=1;
	
	printf("enter string : ");
	scanf("%s",&a);
	
	for(i=0; a[i] !=NULL; i++)
	{
		for(j=i+1; a[j] !=NULL; j++)
		{
			if(a[i] == a[j])
			{
				count++;
			}
		}
		printf("frequency of %c : %d\n",a[i],count );
		count =1;
	}
}
