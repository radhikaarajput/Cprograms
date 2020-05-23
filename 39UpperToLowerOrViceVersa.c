#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	int ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		ch-=32;
		printf("Converted from uppercse to lowercase %c",ch);
	}	
	else if(ch>='A'&&ch<='Z')
	{
		ch+=32;
		printf("Converted from lowercase to uppercse %c",ch);
	}	
	else	
	    printf("Wrong Enetered");
	getch();
}
