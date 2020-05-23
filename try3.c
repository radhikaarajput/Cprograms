#include<stdio.h>
#include<conio.h>
void main()
{
    int i,f,k,sum=0;
	printf("Enter a range \nInital Point: ");
	scanf("%d",&i);
	printf("Final Point: ");
	scanf("%d",&f);
	for(k=i;k<f;k++)
	{
		if(k%2==0)
		{
			if((k%5!=0)&&(k%3==0))
				sum+=k;
		}
	}
	printf("Sum of even numbers which are divisible by 3 but not by 5 in range of %d and %d is %d",i,f,sum);
  	getch();
}
