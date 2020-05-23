#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int n,r,comb,probab;
	printf("Enter value of n and r for finding Probability npr \n");
	scanf("%d %d",&n, &r);
	probab= (fact(n))/(fact(n-r));
	printf("Value of nPr %d \n",probab);
	
	printf("Enter value of n and r for finding Combinations nCr \n");
	scanf("%d %d",&n, &r);
	comb=(fact(n))/(fact(n-r)*fact(r));
	printf("Value of nCr %d \n",comb);
	getch();
}
 int fact(int n)
 {
	int result=1,i;
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
  return result;
}

 
