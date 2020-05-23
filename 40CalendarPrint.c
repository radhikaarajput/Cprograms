#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int dif(int,int,int,int,int,int);
int day(int,int,int);
void cal(int,int);
int main()
{
	int m1,y1;
	printf("Enter a month and year respectively:");
	scanf("%d%d",&m1,&y1);
	cal(m1,y1);
	getch();		
}

int dif(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	int f,s,t,final,temp,i,sum=0,condition;
	if(y1<y2)		
	{
		f=(11-m1+1)*30+(31-d1);		
		for(i=m1-1;i<=10;i++)
		{
			sum=sum+a[i]-30;	
		}
		f+=sum;			
		sum=0;
		s=y2-(y1+1);		
		s*=365;			
		condition=(m2>=2)?y2+1:y2;	 
		for(i=(m1<=2)?y1:y1+1;i<condition;i++)		
		{
			if(i%400==0)
			{
				s++;
			}
			else if(i%100!=0)
			{
				if(i%4==0)
					s++;
			}
		}
		t=(m2-1)*30+(d2-1);		
		for(i=0;i<=m2-1-1;i++)
		{
			sum=sum+a[i]-30;	
		}
		t+=sum;		
		final=f+s+t;		
	
	}
	else if(y1==y2)	
	{
		f=(m2-m1)*30+(d2-d1);
		for(i=m1-1;i<=m2-1-1;i++)
		{
			sum=sum+a[i]-30;
		}
		f+=sum;
		return f;
	}
	
	return final+1;
}
int day(int d,int m,int y)
{
	int diff=0,d1=1,m1=1,y1=1990;
	diff=dif(d1,m1,y1,d,m,y);
	diff++;
	diff=diff%7;
	switch(diff)
	{
		case 1:
			printf("%s","Monday\n");
			break;
		case 2:
			printf("%s","Tuesday\n");
			break;
		case 3:
			printf("%s","Wednesday\n");
			break;
		case 4:
			printf("%s","Thursday\n");
			break;
		case 5:
			printf("%s","Friday\n");
			break;
		case 6:
			printf("%s","Saturday\n");
			break;
		case 0:
			printf("%s","Sunday\n");
	}
	return diff;
}
void cal(int m,int y)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;		
	if(m==2)
	{
		if(y%400==0)
			{
				a[1]++;		//for leap year
			}
		else if(y%100!=0)
		{
			if(y%4==0)
				a[1]++;
		}
	}
	for(i=1;i<=a[m-1];i++)
	{
		printf("%d : ",i);
		day(i,m,y);
	}
	
}

