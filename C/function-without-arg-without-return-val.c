#include<stdio.h>
#include<conio.h>

/*****************************************************************************************************
AIM      -   WAP to print the area of a circle by using functions without argument with return value
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

void area();    //function declaration

int main()
{
	printf("WAP to print the area of a circle by using functions without argument with return value\n");
	area();         //    function calling
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

void area()
{
	float a;
	int r;
	printf("input the radius : ");
	scanf("%d",&r);
	a = 3.14*r*r;
	printf("area = %f", a);  
}

