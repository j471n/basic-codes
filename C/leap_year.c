#include<stdio.h>
#include<conio.h>

/*************************************************************************************************************************
AIM           - WAP  to find whether the given year is leap year or not by using if-else statement
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
****************************************************************************************************************************/

int main()

{
	printf("WAP  to find whether the given year is leap year or not by using if-else statement\n");
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if (year%4==0&&year!=100||year%400==0)
    printf("given year is leap year");
    else
	printf("It is not leap year");
	getch();
    return 0;
}

