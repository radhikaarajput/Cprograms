#include<stdio.h>
#include<conio.h>
void main()
{
    float base, exponent, newbase,result1=1;
    printf("Enter a base number: ");
    scanf("%f",&base);
    printf("Enter an exponent: ");
    scanf("%f", &exponent);
    if(base==0)
    		printf("Answer: ", 1);
    	
    	
    if((exponent>0) &&(base>0))                        //both are positive
    {
			while (exponent != 0)
			{
			    result1 *= base;
			    --exponent;
			}
			printf("Answer = %.2f: ", result1);	
	}
	else if((exponent>0) &&(base<0))                         //only base negative
	{
			while (exponent != 0)
			{
			    result1 *= -base;
			    --exponent;
			}
			printf("Answer = %.2f: ", result1);	
	}
	
	else if((exponent<0) &&(base>0))                    //only exponent negative
    { 
			newbase=1/base;
			while (exponent != 0)
			{
			    result1 *= newbase;
			    ++exponent;
			}
			printf("Answer = %.2f", result1);	
	}
	else if((exponent<0) &&(base<0))                    //both negative
    { 
		newbase= - (1/base);
			while (exponent != 0)
			{
			    result1 *= newbase;
			    ++exponent;
			}
			printf("Answer = %.2f", result1);	
	}
    getch();
}
