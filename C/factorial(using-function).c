#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to calculate the factorial of a number by usnig function only
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

void factorial();    //function declaration

int main()
{
	printf("WAP to calculate the factorial of a number by usnig function only\n");
	factorial();
	getch(); 
	return 0;

}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

void factorial()
{
	int n,f=1,i;
	printf("input the number : ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial = %d", f);
	
}

