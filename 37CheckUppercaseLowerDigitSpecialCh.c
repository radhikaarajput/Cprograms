#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
		if(ch>='a' && ch<='z')
			printf("%c is Lower case alphabet",ch);
		else if(ch>='A'&& ch<='Z')
			printf("%c is Upper case alphabet",ch);		
		else if(ch>='0'&& ch<='9')
			printf("%c is Digit",ch);	
		else
			printf("%c is special character",ch);			
	getch();
}
