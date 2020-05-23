#include<stdio.h>
#include<conio.h>
void main()
{
	int CP,SP,Profit=0,Loss=0;         //CP=cost_price,SP=selling_price
	printf("Enter CP(cost_price) and SP(selling_price ) ");
	scanf("%d %d",&CP, &SP);
	if(CP<SP)
	{
		Profit=(SP-CP);
		printf("Seller has Profit of %d ",Profit);
	}
	else if(CP>SP)
	{
		Loss=(CP-SP);
		printf("Seller has Loss of %d ",Loss);
	}
	else
		printf("No Loss No Profit");
	getch();
}
