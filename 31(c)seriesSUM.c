#include<stdio.h>
#include<conio.h>
double fact(int n);
void main() 
{ 	
	int n,i;
	double x,sum = 1;
	printf("Enter value of x and n for finding sum of series 1+(1/1!)+(1/2!)+(1/3!)+...(1/n!)  ");
	scanf("%d",&n);
	    for (i = 1; i < n; i++)
		 { 
	        sum +=  1 / fact(i); 
		}   
		
	printf("Sum of series is : %.4f", sum); 
	getch();
} 

	double fact(int n)   //function to calculating factorial
	 {
		double result=1;
		int i;
			for(i=1;i<=n;i++)
				result*=i;
	  	return result;
	}
