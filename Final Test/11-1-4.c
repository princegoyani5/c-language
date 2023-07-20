
#include<stdio.h>

int crud(int a[],int n)
{
	int choice;
	printf("Enter 1 To Insert In Array\n");
	printf("Enter 2 To Update In Array\n");
	printf("Enter 3 To Delete In Array\n");
	printf("Enter 4 To Display In Array\n");
	printf("Enter 5 To Exit !!\n");
	printf("Enter Your Choice :- \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			n = insert(a,n);
			break;
		case 2:
			update(a,n);
			break;
		case 3:
			n = minus(a,n);
			break;
		case 4:
			display(a,n);
			break;
		case 5:
			printf("Exited !!!!");
			break;
		default:
			printf("Invalid Choice | Try Again !!");
			break;	
	}
	return choice;
	
}
int insert(int a[],int n)
{
	int i,pos,val;
	
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n+1;i>=pos;i--)
	{
		a[i] = a[i-1]; 
	}
	a[pos] = val;
	n++;
	return n;
}
void update(int a[],int n)
{
	int i,pos,val;
	
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n;i>pos;i--)
	{
		a[i+1] = a[i]; 
	}
	a[pos] = val;
	i++;
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :- %d\n",i,a[i]);
	}
}
int minus(int a[],int n)
{
	int i,pos,val;
	printf("Enter Position :- ");
	scanf("%d",&pos);
	printf("Enter Value :- ");
	scanf("%d",&val);
	
	for(i=n;i>=pos;i--)
	{
		a[i] = a[i-1]; 
	}
	i--;
	return n;
}

void arrayInput (int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf(" array a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
}

void main()
{
	int n,choice;
	printf("Enter Length Of Array :- ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayInput(a,n);
	
	do
	{
		 choice = crud(a,n);
	}
	while(choice!=5);
}


