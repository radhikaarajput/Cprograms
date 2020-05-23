#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,nr,n,space;         
	printf("Enter a number for drawing pascal's triangle: ");
	scanf("%d",&nr);
	for(r=0;r<nr;r++)    //loop for rows
	{
			for(space=0;space<(nr-r);space++)   
				printf(" ");			
		n=1;                  //initially need to print 1 on corners
		for(c=0;c<=r;c++)     //loop for column
		{
			printf(" %d",n);   //printing next no after calculating
			n=n*(r-c)/(c+1);
		}
		
		printf(" \n");    //come to next row and then start printing
	}
	
	getch();
}
