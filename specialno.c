#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int n,num,i,digit,result=0;
	printf("Enter a number ");
	scanf("%d",&n);
		num=n;
		while(num>0)
		{
                digit = num % 10; 
                result+=fact(digit);
                num /= 10; 
	   	 }
	    if(result==n)  	
			printf("Special No");
		else
			printf("Not");	
	getch();
}
 int fact(int n)
 {
	int result=1,i;
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
  return result;
}

 
