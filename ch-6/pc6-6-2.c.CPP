#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();

	printf("enter n : ");
	scanf("%d",&n);

	for(i=1; i>=n; i++)
	{
		sum += n;
		n--;
	}

	printf("%d",sum);
	getch();
}
