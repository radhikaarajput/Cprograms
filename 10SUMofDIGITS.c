#include<stdio.h>
#include<conio.h>
void main()
{
	int n,result,rem,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n;i>0;i=i/10)
	{
		rem=i%10;
		sum=sum+rem;
	}
	printf("Products of digits of number %d is %d",n,sum);
	getch();
}
