#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,b,result;
	printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n");
	printf("Enter your choice\n");
	scanf("%d",&n);
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	switch(n)
	{
		case 1: result=a+b;
			printf("Sum of %d and %d is %d",a,b,result);	
			break;
			
		case 2:	result=a-b;
			printf("Subtraction of %d from %d is %d",b,a,result);	
			break;
			
		case 3:	result=a+b;
			printf("Multiplication of %d and %d is %d",a,b,result);	
			break;
				
		case 4:	result=a/b;
			printf("Division of %d from %d gives quotient %d",a,b,result);	
			break;
			
		default: printf("Wrong choice");
							
	}
	getch();
}
