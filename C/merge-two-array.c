#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input two array of size 5 and merge both the array
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input two array of size 5 and merge both the array\n");
	int a[5],b[5],c[10] ,i;
	
	printf("input 10 int no. for A1 : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
    
	printf("input 10 int no. for A2 : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);	
	}
	
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
		
	}
		for(i=0;i<10;i++)
	{
		printf("%d\t", c[i]);
	}
	
	getch();
	return 0;

}


