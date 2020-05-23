#include <stdio.h>
#include <math.h>
#include<conio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter value of coefficients of Quadratic equation a*x*x + b*x + c = 0\n");
    scanf("%lf %lf %lf",&a, &b, &c);
    discriminant = b*b-4*a*c;
    
    if (discriminant > 0)           //real roots
    {
    
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        printf("Real roots: \nroot1 = %.2lf and root2 = %.2lf",root1 , root2);
    }
    
    else if (discriminant == 0)       //real and equal
    {
        root1 = root2 = -b/(2*a);
        printf("Real and equal roots: \nroot1 = root2 = %.2lf;", root1);
    }
    
    else                           //compliex roots
    { 
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("Complex roots: \nroot1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    getch();
    return 0;
}   
