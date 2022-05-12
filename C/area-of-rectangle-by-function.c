#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to print the area of rectangle length and breath taken by user by usnig function only
OBJECT   -   use of function
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

float area(int x, int y);    //function declaration
//fucntion with argument and with return value

int main()
{
	printf("WAP which accepts the value from the user and print its square and cube by usnig function only\n");
	float A, l, b;
	printf("input the length : ");
	scanf("%f", &l);
	printf("input the breath : ");
	scanf("%f", &b);
	
	A=area(l,b);         //    function calling
	printf("area = %f", A);
	getch(); 
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

float area(int x, int y)
{
	float z;
	z=x*y;
	return (z); 
}

