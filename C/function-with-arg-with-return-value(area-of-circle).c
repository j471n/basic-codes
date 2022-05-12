#include<stdio.h>
#include<conio.h>

/*****************************************************************************************************
AIM      -   WAP to print the area of a circle by using functions with argument with return value
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

float area(int r);    //function declaration

//here "float" is return value adn "int r" is argument

int main()
{
	printf("WAP to print the area of a circle by using functions with argument with return value\n");
	int x;
	float A;
	printf("Input the radius : ");
	scanf("%d", &x);
	A=area(x);         //    function calling
	
	printf("area of a circle : %f", A);
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

float area(int r)
{
	float a;
	a = 3.14*r*r;
	return(a);    // return statement
}



