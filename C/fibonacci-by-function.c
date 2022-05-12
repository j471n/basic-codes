#include<stdio.h>
#include<conio.h>

/*****************************************************************************************************
AIM      -   WAP to print the fibonacci series by usnig function only
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

void fib();    //function declaration
//without argument without return value

int main()
{
	printf("WAP to print the fibonacci series by usnig function only\n");
	fib();         //    function calling
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

void fib()
{
	int a,b,c,i;
	a=0,b=1;
	printf("%d\t%d\t", a,b);  
	for (i=0;i<20;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}

