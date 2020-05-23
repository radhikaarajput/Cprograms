#include<stdio.h>
#include<conio.h>
#include<math.h>
int reverse(int n);
void main()
{
	int n1,n2,i,a,b,c,rev;
	printf("Enter a range \nInitial Point: ");
	scanf("%d",&n1);
	printf("Final Point: ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{						//i=12
			a=pow(i,2);     //a=144
			rev=reverse(i);  //rev=12                
			b=pow(rev,2);   //b=441
			c=reverse(b);    //c=144        
			if(a==c)
				printf("\nSpecial numbers are: %d , %d ",i,rev);
	}
	getch();	
}
int reverse(int n)
{
	int result,rem,quo,i,j=1;
	i=n;
	for(result=0;i>0;i=i/10)
	{
		rem=i%10;
		result=result*10+rem;
	}
	return result;
	 
}
