#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,x0,y0,r,a,dist;
	printf("Enter (x,y) center coordinate of circle: ");
	scanf("%d %d",&x,&y);
	printf("Enter radius of circle ");
	scanf("%d",&r);
	printf("\nEnter points to check ");
	scanf("%d %d", &x0, &y0);
	dist = sqrt((x0 -x)*(x0 -x) + (y0-y)*(y0-y));
	 if(dist <= r)
        printf("\Point %d %d is interior ",x0,y0);
    else
        printf("\Point %d %d is exterior ",x0,y0);
        
	getch();
}
