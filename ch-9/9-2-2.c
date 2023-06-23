#include<stdio.h>

main()
{
	char pass[20] = "123456",email[20] =  "admin@gmail.com";
	char pass[20],email2[20];
	

	
	printf("enetr email: ");
	gets(email2);
	printf("enetr password : ");
	gets(pass2);
	
	if(strcmp(email,email2) == 0)
	{
		if(strcmp(pass,pass2) == 0)
		{
			printf("login successful...");
		}
		else
		{
			printf("login failed invalid credential");
		}
	}
	else
	{
		printf("login failed invalid credential");
	}
}
