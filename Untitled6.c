#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2==0)
		printf("\n%d is even number.");
	else
		printf("\n%d is a odd number.",n);	
	getch();
}
