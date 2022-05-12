#include<stdio.h>
#include<conio.h>

/****************************************************************************************************************
AIM           - WAP  to input two number and print the greatest between them by using if-else statement
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
*********************************************************************************************************************/

int main()

{
	printf("WAP  to input two number and print the greatest between them by using if-else statement\n");
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    if(a>b)
    printf("a is greater");
    else
    printf("b is greater");
	getch();
    return 0;
}


