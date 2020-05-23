#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int n,result=0,i,count=0,rem,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
		for(i=n;i>0;i=i/10)      //finding length 
			 count++;	
		for(i=n;i>0;i=i/10)       
		{	
			  rem=i%10;
			  result+=pow(rem,count);
		}	
		if(result==temp)
			printf("\n%d is Armstrong number",n);
		else
			printf("\n%d is not Armstrong number",n);	
	getch();
}
