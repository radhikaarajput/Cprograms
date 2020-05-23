#include<stdio.h>
#include<conio.h>
int fact(int n);
void main(){
	int n,n1,num,i,digit,result=0;
	printf("Enter a range \nInitial Point: ");
	scanf("%d",&n1);
	printf("Final Point: ");
	scanf("%d",&n);
	for(i=n1;i<=n;i++){ 
		num=i;
		result=0;
		while(num>0){
                digit = num % 10; 
                result+=fact(digit);
                num /= 10; 
	   	 }
	   	 
	    if(result==i)  	
			printf("Special No %d \n" ,i);
     }		
	getch();
}
 int fact(int n)
 {
	int result=1,i;
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
  return result;
}

 
