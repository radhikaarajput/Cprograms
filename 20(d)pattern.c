#include<stdio.h>
#include<conio.h>
void main()
{	
	int j,i,n,k,r,temp1,temp2,flag=1;
	scanf("%d",&n);
	temp1=n;
	temp2=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)    //s
			printf(" ");
		for(k=1;k<=temp1;k++)
			printf("%d",k);
		temp1--;
		if(temp1==1)	
		{for(r=temp2;r>=0;r++)
			printf("%d ",r);
			flag=1;
		}	
		printf("\n");
		if(flag==1)
			temp2--;
	}
	getch();	
}
