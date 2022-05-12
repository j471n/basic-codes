#include<stdio.h>
#include<conio.h>

/*************************************************************************************************************************
AIM           - WAP  to find the given no. is even or not by using if-else statement
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
****************************************************************************************************************************/

int main()

{
	printf("WAP  to find the given no. is even or not by using if-else statement\n");
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    if (a%2==0)
    printf("a is even");
    else
    printf("a is odd");
	getch();
    return 0;
}



