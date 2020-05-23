#include<stdio.h>
#include<math.h>  
#include<conio.h>
double fact(int n);
void main() 
{ 	
	int n,i;
	double x,sum, sign = 1, j;
	printf("Enter value of x and n for finding sum of series x- (x^2 /3!) + (x^3 /5!)- (x^4 /7!)+...(x^n /(2n-1)!) ");
	scanf("%lf  %d",&x,&n);
	sum=x;
	    for (i = 2; i <= n; i++)
		 { 
	        sign*=(-1); 
	        sum +=  sign * pow(x, i) / fact(2*i-1); 
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
