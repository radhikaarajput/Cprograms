#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void add(int,int,int,int,int);
int main(){
	int d1,m1,y1,a;
	printf("enter the date\n");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("what do you want to add?\n1) days\n2)months\n");
	scanf("%d",&a);
	switch(a){
		case 1: printf("enter value\n");
			scanf("%d",&a);
			add(d1,m1,y1,a,0);
			break;
		case 2: printf("enter value\n");
			scanf("%d",&a);
			add(d1,m1,y1,0,a);
			break;
		default: printf("wrong choice!");
	}	
  getch();		
}

void add(int d,int m,int y,int ad,int am){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,sum=0,j;
	if(am==0)
	{
		while(ad>0)
		{
			if(d<a[m-1])
			{
				d++;
				ad--;
			}
			else
			{
				d=1;
				m++;
				ad--;
				if(m>12)
				{
					m=1;
					y++;
				}
			}
		}
		
	}
	else{
		m=m+am;
		if(m>12)
		{
			m=m-12;
			y++;
		}
	}
	printf("%d/%d/%d",d,m,y);
}
