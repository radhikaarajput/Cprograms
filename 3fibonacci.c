#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter a number for printing fibonacci series: ");
	scanf("%d",&n);
	printf("Fibonacci series: ");
	printf("%d %d ",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);	
	}
	
	getch();
}
