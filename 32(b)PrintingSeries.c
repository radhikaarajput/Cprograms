#include<stdio.h>
#include<conio.h>
void main()
{
	int n,j,i,m,k=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=1;
		printf("(");
		for(j=1;j<=i;j++)
		{
			printf("%d^2 ",k);
			k+=2;
			if(j==i)     //for not putting + when k is last term in()
				printf("");
			else
				printf("+");
		}	
		printf(") ");
			if(i==n)     //for not putting + after nth term of series
				printf("");
			else
				printf("+");
			
	}
	
	getch();
}
