#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("Enter a charcter: ");
	scanf("%c",&c);
		if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
		{
			printf("%c is a vowel.\n", c);
		}
		
		else
		{
		printf("%c is Consonant ", c);
		}
		
	getch();
}
