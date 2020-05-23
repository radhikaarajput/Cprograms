#include<stdio.h>
#include<conio.h>
void main(){
	int num,result,rem,i,digit,even=0,odd=0,count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
          while (num> 0)
		  {
                digit = num % 10; 
                if (digit % 2 == 0)
                	even+=digit;
                else 
					odd+=digit;
					
                num /= 10; 
	   	}
	printf("Sum of Even digits of number %d \n",even);
	printf("Sum of odd digits of number %d ",odd);
	getch();
}
