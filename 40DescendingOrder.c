#include<stdio.h>
#include<conio.h>
void main(){
	int array[100], n, i, j, temp;
 	printf("Enter number of elements maximum limlit(100)\n");
	scanf("%d", &n);
  	printf("Enter %d elements to sort in descending order ", n);
 	for(i = 0; i < n; i++)
    		scanf("%d", &array[i]);
	   	for (i = 0 ; i < ( n - 1 ); i++)
		   {
	    		for (j= 0 ; j < n - i - 1; j++)
				{
	      			if(array[j] < array[j+1])
					  {
	        			temp=array[j];
	        			array[j]   = array[j+1];
	        			array[j+1] = temp;
	      			  }
	    		}
	  	 }
	printf("Elements in Descending order: ");
	  	for ( i = 0 ; i < n ; i++ )
	     		printf("%d ", array[i]);
   	getch();
}
