#include<stdio.h>
#include<conio.h>
int main() 
{ 
    int n,n1,n2,i,j,k; 
    printf("Enter a range \nInitail Point: ");
    scanf("%d",&n1);
    printf("Final Point: ");
    scanf("%d",&n2);
    printf("Pythogorean Triplets \n");
     for(i=n1;i<=n2;i++)
	 {
        for(j=i;j<=n2;j++)
		{
            for(k=j;k<=n2;k++)
			{
                if(i*i+j*j==k*k)
				{
                    printf("%d , %d , %d \n",i,j,k);
                }
            }
        }
    } 
    getch();
    return 0; 
} 
