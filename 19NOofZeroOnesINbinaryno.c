#include<stdio.h>
#include<conio.h>
void main(){
	int rem,zero=0,one=0,n,i=1,decimal;
	long binary=0;;
	printf("Enter a number: ");
	scanf("%d",&n);
	decimal=n;
	while(decimal!=0){
			rem=decimal%2;
			decimal=decimal/2;
			binary+=(rem*i);
			i=i*10;
		} 
	printf("Binary Equivalent of %d is %d",n,binary);
	while(binary!=0){
		rem=binary%10;
			if(rem==0)
				zero++;
			else 
				one++;	
	binary = binary/10;
	}
	printf("\nNumber of ones in Binary number %d ",one);
	printf("\nNumber of zeroes in Binary number %d",zero);
	getch();
}
