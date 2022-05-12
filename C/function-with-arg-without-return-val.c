#include<stdio.h>
#include<conio.h>

/*****************************************************************************************************
AIM      -   WAP to print the area of a circle by using functions with argument without return value
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

void area(int r);    //function declaration

//here "void" stands for without-return-value & "int r" stands for with argument.
//which means printf-statement will be in main function.

int main()
{
	printf("WAP to print the area of a circle by using functions with argument without return value\n");
	int x;
	float A;
	printf("Input the radius : ");
	scanf("%d", &x);
	area(x);         //    function calling
	
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

void area(int r)
{
	float a;
	a = 3.14*r*r;
	printf("area = %f",a);  // return statement
}



