#include<stdio.h>
#include<conio.h>

/************************************************************
AIM   - WAP  to calculate the area of a circle
PROGRAMMER    - Jatin sharma
************************************************************/

void main()
{
	printf("AIM   - WAP  to calculate the area of a circle\n");
    float r, a;
    //a= area, r= radius
    printf("Enter the radius of a circle :");
    scanf("%f", &r);
    a=3.14*r*r;
    printf("The area of a Circle is :" "%f",a);
    getch();
}
