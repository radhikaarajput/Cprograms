# include <stdio.h> 
# include <conio.h> 
void main() 
{ 	
	//this array represents the no of days in a particular month
	 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	 char week[7][10];      //This array represents the days(Sunday...)
	 int date, mon, year, i, r, s = 0 ; 
	 strcpy(week[0], "Sunday") ; 
	 strcpy(week[1], "Monday") ; 
	 strcpy(week[2], "Tuesday") ; 
	 strcpy(week[3], "Wednesday") ; 
	 strcpy(week[4], "Thursday") ; 
	 strcpy(week[5], "Friday") ; 
	 strcpy(week[6], "Saturday") ; 
	 
	 printf("Enter a valid date in this format(dd/mm/yyyy) : ") ; 
	 scanf("%d / %d / %d", &date, &mon, &year) ; 
				// whether the year is a leap year or not 
		 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) 
		  month[1] = 29 ;
		   		//adding all the days of months that are before the month that user entered
		 for(i = 0 ; i < mon - 1 ; i++) 
		  s = s + month[i] ;
	
	 s = s + (date + year + (year / 4) - 2) ; 
	 s = s % 7 ; 
	 printf("\nThe day is : %s", week[s]) ; 
	 getch() ;
}
