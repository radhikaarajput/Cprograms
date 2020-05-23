#include <stdio.h>
#include<conio.h>
void main()
{
    float result,a;
    int choice;
    printf("1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\n3: Convert Height from cm to feet");
    printf("\n4: Convert Height from feet to cm");
    printf("\nEnter your choice 1-4 ");
    scanf("%d",&choice);
	switch(choice)
	{
	   		case 1: printf("Enter temperature in Fahrenheit: ");
	        scanf("%f",&a);
	        result= (a - 32) / 1.8;
	        printf("Temperature in Celsius: %.2f",result);
	        break;
	    
	    case 2: printf("\nEnter temperature in Celsius: ");
	        scanf("%f",&a);
	        result= (a*1.8)+32;
	        printf("Temperature in Fahrenheit: %.2f",result);
	        break;
	    
	   case 3: printf("\nEnter Height in cm: ");
	        scanf("%f",&a);
	        result = (30.48/a);
	        printf("Height in feet: %.2f",result);
	        break;
	
		case 4: printf("\nEnter height in feet: ");
	        scanf("%f",&a);
	        result= (30.48 * a);
	        printf("Height in cm: %.2f",result);
	        break;
	         
	    default: printf("\nInvalid Choice");
}
    getch();   
}
