#include<stdio.h>
main()

{
	char str[20];
	int i; 
	
	printf("enter string : ");
	scanf("[^\n]",&str);
	
	for(i=0; i<20; i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	printf("uppercase string : %s",str);
	
}
