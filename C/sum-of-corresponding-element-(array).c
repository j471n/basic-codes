#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input two array of size 10 find the sum of the corresponding elements of these array
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input two array of size 10 find the sum of the corresponding elements of these array\n");
	int a[10],b[10],c[10] ,i;
	
	printf("input 10 int no. for A1 : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);	
	}
    
	printf("input 10 int no. for A2 : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);	
	}
	
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("array = %d\n", c[i]);
	getch();
	return 0;

}


