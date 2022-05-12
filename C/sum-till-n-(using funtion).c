#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to take a value from user and print sum till that num by usnig functions only
OBJECT   -   use of functions
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int sum(int n);    //function declaration

int main()
{
	printf("WAP to take a value from user and print sum till that num by usnig functions only\n");
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
	int i,add=0;
	for (i=1;i<=n;i++)
	{
		add=add+i;
	}
	return(add);

	
}

