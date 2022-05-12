#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to check the no is prime no or not by usnig function only
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int prime(int x);    //function declaration

int main()
{
	printf("WAP to check the no is prime no or not by usnig function only\n");
	int p,n;
	printf("input the number : ");
	scanf("%d", &n);
	
	p=prime(n);         //    function calling
	getch(); 
	return 0;

}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

int prime(int x)
{
	int m,i;
	for(i=2;i<x;i++)
	{
	   if(x%i==0)
	   m=1;	
	}
	if (m==1)
	return printf("It is not the prime num");
	else
	return printf("It is prime num");
}

