#include<stdio.h>
#include<conio.h>

/***********************************************************************
AIM      -   WAP to print sum of a and b by using functions only
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
************************************************************************/

int sum(int x, int y);    //function declaration

int main()
{
	int a, b, c;
	printf("Input the value of a : ");
	scanf("%d", &a);
	printf("Input the value of b : ");
	scanf("%d", &b);
	
	c=sum(a,b);          //    function calling
	
	printf("sum of a and b is : %d", c);
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

int sum (int x, int y)
{
	int z;
	z= x+y;
	return(z);    // return statement
}


