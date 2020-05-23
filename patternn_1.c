#include<stdio.h>
int main()
{
	void print_patt(int,int);
	int i,n,f=0;
	scanf("%d",&n);
	printf("%s","-------------------------------\n");
	for(i=1;i<=n;i++)
	{
		print_patt(1,i);
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		print_patt(1,n-1-i);
		printf("\n");
	}
	return 1;
}
void print_patt(int c,int n)
{
	if(c<n)
	{
		printf("%d",c);
		print_patt(c+1,n);
	}
	else
	{
		printf("%d",c);
		return;
	}
}

