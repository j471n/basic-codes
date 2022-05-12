#include<stdio.h>
#include<conio.h>
#include<math.h>

/*****************************************************************************************************
AIM      -   WAP which accepts the value from the user and print its square and cube by usnig function only
OBJECT   -   use of function & pow()
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

void sqr_cube();    //function declaration

int main()
{
	printf("WAP which accepts the value from the user and print its square and cube by usnig function only\n");
	jatin();         //    function calling
	getch();
	return 0;
}

/******************************************************************************************
the function is written below and the given above function is the main program or function
*******************************************************************************************/

void sqr_cube()
{
	int n, square, cube;
	printf("input the number : ");
	scanf("%d", &n);
	square=pow(n,2);
	cube=pow(n,3);
	printf("square = %d\ncube = %d",square, cube); 
}

