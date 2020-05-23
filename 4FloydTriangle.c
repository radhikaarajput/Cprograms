#include<stdio.h>
#include<conio.h>
void main()
{
	int n,result=1,i,j,k=1;
	printf("Enter a number of rows of floyd triangle: ");
	scanf("%d",&n);
	printf("Floyd Triangle \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	getch();
}
