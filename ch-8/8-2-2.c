#include<stdio.h>
main()

{
	int fn,sn,i,k,p=0;
	
	printf("enter the first number :");
	scanf("%d",&fn);
	
	printf("enter the second  number :");
	scanf("%d",&sn);
	
	k=(sn-fn)/4;
	int a[k];
	
	
	for(i=fn; i<=sn; i++)
	{
		if(i%4==0)
		{
			a[p]=fn;
			p++;
		}
		fn++;
	}
	printf("the array id : \n");
	for(i=0; i<=k; i+++)
	
	printf("%d",a[i]);
}
}
