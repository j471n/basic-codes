#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to input any 10 num and print the sum of them by using loop
OBJECT   -   use of for loop
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input any 10 num and print the sum of them by using loop\n");
	int n,i,s=0;
	printf("enter the number : ");
	for(i=0;i<10;i++)
	{
		scanf("%d", &n);
	    s = s+n;
	}
	
	printf("sum = %d", s);
	getch(); 
	return 0;

}

