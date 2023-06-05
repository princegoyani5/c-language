#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0,fd,id;
	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);

	id=n%10;

	while(n>=9)
	{
		n=n/10;
	}

	fd=n;

	sum=id + fd;
	printf("sum of first and last digit is : %d",sum);

	getch();

}