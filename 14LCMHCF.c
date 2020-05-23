#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,minimumMultiple,hcf;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	if(a>b)                                      //find max b/w a and b
		minimumMultiple=a;
	else
		minimumMultiple=b;	
	 while(1)                                   //always true
    {
        if( minimumMultiple%a==0 && minimumMultiple%b==0 )        
        {
            printf("The LCM of %d and %d is %d \n", a, b,minimumMultiple);
            break;
        }
        ++minimumMultiple;
    }
    
     for(i=1; i <= a && i <= b; i++)
    {
        
        if(a%i==0 && b%i==0)
            hcf = i;
    }
    printf("HCF of %d and %d is %d", a, b, hcf);
	
	getch();
}
