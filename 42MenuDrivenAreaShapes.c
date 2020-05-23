#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
	float result;
	printf("1.Area of circle \n2.Area of recatangle \n3.Area of square \n4.Area of circle \n");
	printf("Enter your choice ");
	scanf("%d",&c);
	  switch(c)
	  {
		    case 1:
				printf("Enter radius of circle ");
	  			scanf ("%d ",&a);
				result=3.14*a*a;
			    printf("The area of circle is %.2f",result);
			    break;
		
		    case 2:
				printf("Enter length and breath of rectangle ");
	  			scanf ("%d %d",&a,&b);	
				result=a*b;
			    printf("The area of rectangle is %.2f",result);
			    break;
		
		    case 3:
				printf("Enter base and height of triangle ");
	  			scanf ("%d %d",&a,&b);
				result= 1/2*a*b;
			    printf("The area of triangle is %.2f",result);
			    break;
		
	    	default: printf ("Wrong Choice");
	  }
  	getch();
}
