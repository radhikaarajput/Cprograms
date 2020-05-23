#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int no,n,i=1,k=0,rem,choice,decimal,N;
	long binary=0;
	printf("Binary to decimal conversion \n");
	printf("Decimal to binary conversion \n");
	printf("Enter your choice 1-2 \n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("Enter Binary number");
		scanf("%lld",&binary);
		for(i=binary; i!=0 ; i=i/10)
		{
			rem=i%10;
			decimal += rem*pow(2,k);
			k++;
		}
		printf("%lld",decimal);
		
	}
	
	else if(choice==2)
	{
		printf("Enter decimal number");
		scanf("%d",&decimal);
		n=10;
		i=1;
		
		n=decimal;
		while(decimal!=0)
		{
			rem=decimal%2;
			decimal=decimal/2;
			binary+=(rem*i);
			i=i*10;
		} 
		printf("%d",binary);
	}
	
	else
	{
		printf("Invalid choice");
	}
	

	getch();
}

