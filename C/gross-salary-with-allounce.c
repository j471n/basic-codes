#include<stdio.h>
#include<conio.h>


/**********************************************************************************
AIM - Mr. Ace basic salary input through the keyboard, his daily allounce 40% of 
      basic salary and houce rent allounce is 20%. WAP to calculate his gross salary.
PROGRAMMER    - Jatin sharma
*************************************************************************************/

int main()
{
	float salary,da,ha,gross;
	printf("Enter the basic salary of Mr. Ace : ");
	scanf("%f", &salary);

    da=salary*40/100;
    ha=salary*20/100;
    gross=ha+da+salary;
    
	printf("Gross salary of Mr. Ace is : %f", gross);
	getch();
	return 0;
}
