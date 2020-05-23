#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	float a,result;
	printf("1.Temprature Conversion Celsius to fahernheit \n 2.Temprature Conversion fahernheit to Celsius \n 3.Height Conversion cm to feet \n 4.Height Conversion feet to cm \n");
	
	printf("Enter a number for conversion \n");
	scanf("%.2f",&a);
	printf("Enter your choice\n");
	scanf("%n",&n);
	
	
	switch(n)
	{
		case 1:
			result=(a - 32) / 1.8;
			//printf("%f Celsius= %f Fahernheit",a,result);	
			//printf("%f",result);
			 printf("Temperature in Celsius: %f",result);
			break;
			
		case 2:
			result=(a *1.8)+32;
			//printf("%f Fahernhiet= %f Celsius ",a,result);	
			printf("Temperature in Celsius: %f",result);
			break;
			
		case 3:
			result=(0.0328 * a);
			printf("%f cm= %f Feet",a,result);	
			break;
				
		case 4:
			result=(0.0328/a);
			printf("%f Feet= %f cm",a,result);	
			break;
			
		default:
			printf("Wrong choice");
							
	}
	return 0;
	getch();
}
