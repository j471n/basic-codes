#include<stdio.h>
#include<conio.h>

/*************************************************************************************************************************
AIM           - WAP  to input to check the hether the two number enter by user are equal or not by using if-else statement
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
****************************************************************************************************************************/

int main()

{
	printf("WAP  to input to check the hether the two number enter by user are equal or not by using if-else statement\n");
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    if(a==b)
    printf("a and b are equal");
    else
    printf("a and b are not equal");
	getch();
    return 0;
}


