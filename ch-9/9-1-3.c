#include<stdio.h>
main()

{
	char str[20];
	int i; 
	
	printf("enter string : ");
	scanf("[^\n]",&str);
	
	for(i=0; i<20; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
	printf("lowercase string : %s",str);
	
}
