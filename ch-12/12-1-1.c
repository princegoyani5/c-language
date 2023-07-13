#include<stdio.h>
#include<string.h>

struct student 
{
	int id,age,standard;
	char name[20];  
	char course[20];
	char city[20];  
	char school[20];
};

main()

{
	int n=4,i;
	struct student s[20];
	
	for(i=0; i<n; i++)
	{
		printf("enter student (%d/%d) :\n",i+1,n-1);
		
		printf("id\t :\n ");
		scanf("%d",&s.id);
		
		printf("name\t :\n ");
		scanf("%s",&s.name[20]);
	    
	    printf("age\t :\n ");
		scanf("%d",&s.age);
	    
	    printf("course\t :\n ");
		scanf("%s",&s.course[20]);
	    
	    printf("city\t :\n ");
		scanf("%d",&s.city);
		
		printf("standrad\t :\n ");
		scanf("%d",&s.standrad);
	    
	    printf("school\t :\n ");
		scanf("%s",&s.school);
	}
}
