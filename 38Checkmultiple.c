#include<stdio.h>
#include<conio.h>
void main()
{
	int n1, n2;
    printf("Enter two numbers for checking whether first is multiple of second or not: ");
    scanf("%d%d", &n1, &n2);
    if (n2 % n1 == 0)
       printf("%d is a multiple of %d\n", n2, n1);
    else
       printf("%d is not a multiple of %d\n", n2, n1);
       
	getch();
}
