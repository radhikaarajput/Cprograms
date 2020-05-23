#include <stdio.h>
#include<conio.h>
 
void main()
{
    float principalAmt, rate, SI;    //SI (Simple Interest)
    int time;
    printf("Enter the values of Principal Amount, Rate and Time \n");
    scanf("%f %f %d", &principalAmt, &rate, &time);
    SI = (principalAmt * rate * time) / 100.0;
    printf("Simple interest = %.2f\n", SI);
    getch();
}
