#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a,r,sum=0;
	printf("Enter number of terms you want in GP ");
	scanf("%d",&n);
	int A[n];
	printf("Enter terms of GP \n");
		for(i=1;i<=n;i++){
				printf("Enter %d term ",i);
				scanf("%d",&A[i]);			
		}
		a=A[1];
		r= A[2]/A[1];
		for(i = 1; i<= n; i++) {
		        sum = sum + a; 
		        a = a * r; 
		 } 	
    printf("Sum of series %d ",sum);		
	getch();
}
