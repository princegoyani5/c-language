#include<stdio.h>
void main()

{
	FILE *fp1,*fp2,*fp3;
	int a;
	
	fp2 = fopen("D:\4184-princegoyani\C-language\ch-13\p1","r");
	fp1 = fopen("D:\4184-princegoyani\C-language\ch-13\p2.txt","w");
	
	fscanf(fp2,"%d",&a);
	
	fclose(fp2);
	
	printf("read content from one file : %d",a);
	
	fprintf(fp2,"%d",a);
	
		fclose(fp2);

}
