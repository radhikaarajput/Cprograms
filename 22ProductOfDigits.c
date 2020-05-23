#include<stdio.h>
#include<conio.h>
void main(){
	int n,result,rem,i,prod=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10){
		rem=i%10;
		prod=prod*rem;
	}
	printf("Products of digits of number %d is %d",n,prod);
	getch();
}
