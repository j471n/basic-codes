#include<stdio.h>
#include<conio.h>

/*****************************************************************************************************
AIM      -   WAP to print the area of a circle by using functions without argument with return value
OBJECT   -   use of function
*************************************************************************************************/

float area();    //function declaration
//here "float" stands for return value and there is no argument(void)

int main()
{
	printf("WAP to print the area of a circle by using functions without argument with return value\n");
	
	float A;
	A=area();         //    function calling
	printf("area = %f",A);
	
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

float area()
{
	float a;
	int r;
	printf("input the radius : ");
	scanf("%d",&r);
	a = 3.14*r*r;
	return(a);  // return statement
}

