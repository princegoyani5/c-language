#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1;
	clrscr();

	printf("enter a: ");
	scanf("%d",&n);

	while(i<=10)
	{

		printf("%d * %d =%d\n",n,i,n*i);
		i++;
	}

	getch();
}
