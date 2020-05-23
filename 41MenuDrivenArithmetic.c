#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,result;
    char c;
	printf("1.Addition(+) \n2.Subtraction(-) \n3.Muliplication(*)\n4.Division(/) \n5.Remainder(%)");
	printf("\nEnter your choice (Any Arithmetic operator): ");
	scanf("%c",&c);
	printf("\nEnter two operands ");
  	scanf ("\n %d \n %d",&a, &b);
	  switch(c)
	  {
		    case '+':
			result=a+b;
		    printf("The sum of %d and %d is %d",a,b,result);
		    break;
		
		    case '-':
			result=a-b;
		    printf("The difference of %d from %d is is %d",b,a,result);
		    break;
		
		    case '*':
			result=a*b;
		    printf("The multiplication of %d and %d is %d",a,b,result);
		    break;
		
		    case '/':
			result=a/b;
		    printf("The quotient is %d",result);
		    break;
		    
		    case '%':
			result=a%b;
		    printf("The remainder is %d",result);
		    break;
	
		    
	
	    	default: printf ("Wrong Choice");
	  }
  	getch();
}
