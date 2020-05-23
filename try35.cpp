#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int dif(int,int,int,int,int,int);
int main(){
	int d1,m1,y1,d2,m2,y2,result;
	printf("enter the starting date (Format DD MM YEAR): ");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("enter the starting date (Format DD MM YEAR): ");
	scanf("%d%d%d",&d2,&m2,&y2);
	result=dif(d1,m1,y1,d2,m2,y2);
	printf("Difference between the dates excluding the starting date: %d \n",result);
  getch();
}
int dif(int d1,int m1,int y1,int d2,int m2,int y2){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	int f,s,t,final,temp,i,sum=0,condition;
	if(y1<y2){		
		f=(11-m1+1)*30+(31-d1);		
		 for(i=m1-1;i<=10;i++)
			 sum=sum+a[i]-30;	
		f+=sum;	
		sum=0;
		s=y2-(y1+1);		
		s*=365;			
		condition=(m2>=2)?y2+1:y2;		
		for(i=(m1<=2)?y1:y1+1;i<condition;i++){
			if(i%400==0)
				s++;		
			else if(i%100!=0){
				if(i%4==0)
					s++;
			}
		}
		t=(m2-1)*30+(d2-1);		
			for(i=0;i<=m2-1-1;i++)
				sum=sum+a[i]-30;		
		t+=sum;		
		final=f+s+t;
	}
	else if(y1==y2){		
		f=(m2-m1)*30+(d2-d1);
		for(i=m1-1;i<=m2-1-1;i++)
			sum=sum+a[i]-30;
		f+=sum;
		return f;
	}
	
	return final;
}

