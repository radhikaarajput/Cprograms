#include<stdio.h>
#include<conio.h>
void main()
{
	int n,result,rem,quo,i,j=1;
	printf("Enter a number: " );
	scanf("%d",&n);
	i=n;
	for(result=0;i>0;i=i/10)
	{
		rem=i%10;
		result=result*10+rem;
	}
	printf("Reverse of %d is %d",n,result);
	getch();
}
