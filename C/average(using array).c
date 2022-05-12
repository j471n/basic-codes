#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 10 int no. in an array and print the avg of them
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input 10 int no. in an array and print the avg of them\n");
	int a[10], i,s=0;
	float  avg;
	printf("input 10 int no. : ");
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	
	avg=s/10;
	printf("avg = %f",avg);
	getch();
	return 0;

}


