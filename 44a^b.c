#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,result=0;
	printf("Enter value of a and b for finding a^b \n");
	scanf("%d %d",&a,&b);
	result=pow(a,b);
	printf("%d",result);
	getch();
}
