#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,c=1;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j>=1;j--)
			printf("%d ",j);
		for(j=2*(n-i)-3;j>=1;j--)
			printf("  ");
		for(j=((i!=n-1)?1:2);j<=i+1;j++)
			printf("%d ",j);
		printf("\n");
	}
	for(i=n-1;i>=1;i--,c++)
	{
		for(j=i;j>=1;j--)
			printf("%d ",j);
		for(j=1;j<=2*c-1;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
	getch();
}
