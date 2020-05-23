#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  printf("Enter a year : ");
  scanf("%d", &year);
	//leap yr is exactly div by 400 
	//leap year is not div by 100 and then check whether it's div by 4 
	  if (year%400 == 0)        
	     printf("%d is a leap year.\n", year);
	  else if (year%100 == 0) 
	     printf("%d is not a leap year.\n", year);
	  else if (year%4 == 0) 
	     printf("%d is a leap year.\n", year);
	  else 
	     printf("%d is not a leap year.\n", year);  
    getch();
}   
   
