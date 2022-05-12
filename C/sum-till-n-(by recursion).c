#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to take a value from user and print sum till that num by usnig recursion only
OBJECT   -   use of recursion
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int sum(int n);    //function declaration

int main()
{
	printf("WAP to take a value from user and print sum till that num by usnig recursion only\n");
	int x,s;
	printf("enter the number : ");
	scanf("%d", &x);
	s = sum(x);
	printf("sum = %d", s);
	getch(); 
	return 0;

}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

int sum(int n)
{
	
	if (n==1)
	return (1);
	else
	return (n+sum(n-1));

	
}

