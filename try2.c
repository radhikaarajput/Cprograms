#include <stdio.h>
#include <math.h>  
#include<conio.h>
double fact(int n);
void main() 
{ 	int n,i;
	double x,sum = 1, sign = 1, j, inc= 2;
	printf("Enter value of x and n for finding sum of series 1- (x^2 /2!) + (x^4 /4!)- (x^6 /6!)+...(x^n /n!)  ");
	scanf("%lf  %d",&x,&n);
    for (i = 1; i < n; i++)
	 { 
        sign*=(-1); 
        sum +=  sign * pow(x, inc) / fact(inc); 
        inc += 2; 
	}   
    printf("%.4f", sum); 
    getch();
} 
double fact(int n)
 {
	double result=1;
	int i;
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
  return result;
}
