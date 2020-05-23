#include<stdio.h>
#include<conio.h>
void main()
{
	double n,i,sum=0;
	printf("Enter a number for finding sum of series 1+ 1/2 + 1/3...1/n : ");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
			sum+= 1/i;			
	
	printf("Sum of series %lf \n ",sum);
	getch();
}
