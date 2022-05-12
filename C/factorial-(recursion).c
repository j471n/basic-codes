#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to calculate the factorial of a number by usnig recursion only
OBJECT   -   use of recursion(when fucntion call itself)
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int factorial(int n);    //function declaration

int main()
{
	printf("WAP to calculate the factorial of a number by usnig recursion only\n");
	int x,fact;
	printf("enter the number : ");
	scanf("%d", &x);
	fact = factorial(x);
	printf("factorial = %d", fact);
	getch(); 
	return 0;

}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

int factorial(int n)
{
	int f;
	if (n==1)
	return (1);
	else
	f=n*factorial(n-1);   //here factorail function calling itself so there is recursion
	return (f);

	
}

