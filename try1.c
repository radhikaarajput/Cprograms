
#include <stdio.h>
#include<conio.h>
int main()
{
    int n,rev,rem,quo,i,j=1;
	printf("Enter a number \n");
	scanf("%d",&n);
	i=n;
	for(rev=0;i>0;i=i/10)       //reverse of n
	{
		rem=i%10;
		rev=rev*10+rem;
	}
    while(rev != 0)            
    {
        switch(rev % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        rev /= 10;
    }

	getch();
    return 0;
}
