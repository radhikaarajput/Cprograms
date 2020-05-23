#include<stdio.h>
#include<conio.h>
#include<math.h>
int reverse(int n);
void main()
{
	int n,i,a,b,c,rev;
	printf("Enter a no \n");
	scanf("%d",n);
	
		rev=reverse(n);
		if(n==rev)
		{
			a=pow(n,2);     
			printf("%d",a);             
			b=pow(rev,2); 
			printf("%d",b);              
			c=reverse(b);
			printf("%d",c);
			if(a==c)
				printf("Number %d",a);
		}
	
	getch();
	
}
int reverse(int n)
{
	int result,rem,quo,i,j=1;
	printf("Enter a number \n");
	scanf("%d",&n);
	i=n;
	for(result=0;i>0;i=i/10)
	{
		rem=i%10;
		result=result*10+rem;
	}
	return result;
}
