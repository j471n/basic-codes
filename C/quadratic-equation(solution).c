#include<stdio.h>
#include<conio.h>
#include<math.h>

/**********************************************************************************
AIM           - WAP to solve the roots of the given qudratic equation
PROGRAMMER    - Jatin sharma
*************************************************************************************/

int main()
{
	float a,b,c,x,y,z;
	printf("Input the value of a : ");
	scanf("%f", &a);
	printf("Input the value of b : ");
	scanf("%f", &b);
	printf("Input the value of c : ");
	scanf("%f", &c);
	
	z=sqrt(b*b-4*a*c);
	x=(-b+z);
	y=(-b-z);
	
	printf("The value of x is : %f\nThe value of y is : %f",x,y);
	getch();
	return 0;
}
