#include<stdio.h>
#include<conio.h>

/************************************************************************************************
AIM    -    WAP to print fibonacci series up to 15 terms by using for loop
PROGRAMMER    - Jatin sharma
OBJECT -     use of for-loop
*************************************************************************************************/

int main()

{
	printf("WAP to print fiboncci series up to 15 terms by using for loop\n");
	int a, b, c, i;
	a=0;
	b=1;
	printf("%d, %d, ", a,b);
	
	for (i=0;i<13;i++)
	{
		c=a+b;
		printf("%d, ", c);
		a=b;
		b=c;
	}
	getch();
	return 0;
}
