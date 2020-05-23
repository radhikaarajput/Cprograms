#include<stdio.h>
#include<conio.h>
void main()
{
  	int x,y,z;
  	printf("Truth table for x+yz \n X \t Y \t Z \t X+YZ \n");

	for(x=0;x<=1;x++)
	{
		for(y=0;y<=1;y++)
		{
			for(z=0;z<=1;z++)
			{
				if((x == 1 && y == 1) || (z == 1))
					printf("\n %d \t %d \t %d \t  1",x,y,z);
				else 
					printf("\n %d \t %d \t %d \t  0",x,y,z);
			}
		}		
	}
 getch();
}
