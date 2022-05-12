#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 10 int no. in an array and print the greatest and smallest betweem them
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input 10 int no. in an array and print the greatest and smallest betweem them\n");
	int a[10], i, max,min;
	float  avg;
	printf("input 10 int no. : ");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	min=a[0];
	for(i=1;i<10;i++)
	{
		if (a[i]>max)
		max=a[i];
		if (a[i]<min)
		min=a[i];
	}
	printf("max = %d\n", max);
	printf("min = %d", min);
	
	getch();
	return 0;

}


