#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,m;
	printf("Enter a number for printing table: ");
	scanf("%d",&n);
	printf("Enter a number of multiples: ");
	scanf("%d",&m);
	
	for(i=1;i<=m;i++)
	{
			printf("%d * %d = %d ",n,i,i*n);
			printf("\n");			
	}

	getch();
}
