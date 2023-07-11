#include<stdio.h>
#include<string.h>

main()
{
	char a[20];
	int *p;
	int b=0;
	
	printf("enter any string :  ");
	scanf("%[^\n]",&a);
	
	b=strlen(a);
	p=&b;	
	printf("your string length : %d",*p);
}
