#include<stdio.h>
#include<conio.h>
void main()
{
	int n,result=1,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
	printf("Factorial of %d is %d.",n,result);
	getch();
}
