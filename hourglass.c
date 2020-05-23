#include<stdio.h>
#include<conio.h>
void print_patt(int,int,int);
int main()
{	
	int j,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		print_patt(1,n-i,0);
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");	
		print_patt(1,i,0);
		printf("\n");
	}
	getch();
}
void print_patt(int c,int n,int f)
{
	if(c==0)
		return;
	if(f==0)
	{
		if(c<n)
		{
		printf("%d",c);
		print_patt(c+1,n,0);	
		}
		else
		{
		printf("%d",c);
		print_patt(c-1,n,1);	
		}
		
	}
	else
	{
		if(c>1)
		{
			printf("%d",c);
			print_patt(c-1,n,1);
		}
		else
		{
			printf("%d",c);
			return;
		}
	}
}
