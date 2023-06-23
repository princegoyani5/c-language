#include<stdio.h>

struct a
{
	int id;
	char name[20];
	float per;
} s={101,"tirth",99.99};

void main()
{
	int a,i,n;
	FILE *fp;
	fp = fopen("C:\\Users\\123\\Desktop\\tirth.txt","a");
	fscanf(fp,"%d%s%2f",&s.id,&s.name,&s.per);
	
	for(i=0;i<n;i++)
	{
	
	printf(fp,"id\t:%d\nname\t:%s\nper\t:%.2f\n",s.id,s.name,s.per);
	}
	printf("tirth sakariya");
	
	fclose(fp);
	
}
