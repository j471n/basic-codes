#include<stdio.h>
#include<conio.h>

/*************************************************************************************************************************
AIM           - WAP  to print the greatest between three no. by using if-else statement
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
****************************************************************************************************************************/

int main()

{
	printf("WAP  to print the greatest between three no. by using if-else statement\n");
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    if (a>b&&a>c)
    printf("a is greatest");
    else if (b>a&&b>c)
    printf("b is greatest");
    else
    printf("c is greatest");
	getch();
    return 0;
}



