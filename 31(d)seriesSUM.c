#include<stdio.h>
#include<math.h>  
#include<conio.h>
double fact(int n);
void main() 
{ 	
	int a,n,r,i;
	double sum = 0;
	printf("Enter value of a,r and n for finding sum of series a+ (a*r^1) + (a*r^2)+(a*r^3)+...(a*r^n )  ");
	scanf("%d %d %d",&a,&r,&n);
		for (i = 0; i < n; i++)
		     sum += a* pow(r,i);
		        
	printf("Sum of series is : %.4f", sum); 
	getch();
} 

	
