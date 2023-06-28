#include<stdio.h>

int arraylength(char a[],int n)
{
	int i,len=0;
	for(i=0; a[i]!=NULL; i++)
	{
		len++;
	}
	return len;
	
}
void main()
{
	int len=0;
	char a[20];
	
	printf("enter string : ");
	gets(a);
	
	len = arraylength(a,20);
	printf("length of string is : %d",len);
}
