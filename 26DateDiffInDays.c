#include<stdio.h>
#include<conio.h>
int valid_date(int day, int mon, int year);
void main()
{
	int day1,month1,year1,day2,month2,year2,day_diff ,month_diff,year_diff;
	printf("Enter first date \n ");
	scanf("%d%d%d",&day1,&month1,&year1);
	printf("Enter second date \n ");
	scanf("%d%d%d",&day2,&month2,&year2);
	
		if(!validDate(day1,month1,year1))
		{
				printf("Not valid");
		}	
		if(!validDate(day2,month2,year2))
		{	
				printf("Not valid");
		}
		if(day2<day1)
		{
			if(month2==3)                                               //if end month is march
			{                                                  
				if((year2%4==0 && year2%100!=0)||(year2%400==0))    //checking for leap year
					day2+=29;
				else                                                 //not leap year
					day2+=29;
			}
		
		else if(month2 == 1 || month2 == 3|| month2 == 5 || month2 == 7|| month2 == 9 || month2 == 12) 
			day2+=31;
		else if (month2 == 5 || month2 == 7 || month2 == 10 || month2 == 12) 
           day2 += 30; 
           
        month2--;
        
			if (month2 < month1)
	   		 {
		        month2 += 12;
		        year2 -= 1;
	    	}  
			
	day_diff = day2 - day1;
    month_diff = month2 - month1;
    year_diff = year2 - year1;
	 printf("Difference: %d years %02d months and %02d days.", year_diff, month_diff, day_diff);	  	
	}			
	getch();
}
int valid_date(int day, int mon, int year)    
{
    int is_valid = 1, is_leap = 0;
    
    if (year >= 1800 && year <= 9999) 
    {
 
        //  check whether year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            is_leap = 1;
        }
        
        // check whether mon is between 1 and 12
        if(mon >= 1 && mon <= 12)
        {
            // check for days in feb
             if (mon == 2)
            {
                if (is_leap && day == 29) 
                {
                    is_valid = 1;
                }
                else if(day > 28) 
                {
                    is_valid = 0;
                }
            }
            
            // check for days in April, June, September and November
            else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) 
            {
                if (day > 30)
                {
                    is_valid = 0;
                }
            }
            
            else if(day > 31)
            {            
                is_valid = 0;
            }        
        }
        
        else
        {
            is_valid = 0;
        }
 
    }
    else
    {
        is_valid = 0;
    }
    
    return is_valid;
        
}
 
