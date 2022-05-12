#include<stdio.h>
#include<conio.h>
#include<math.h>


/************************************************************************************************************************
AIM           - WAP to calculate the compound Interest for the principle value with rate r% and time in t years.
PROGRAMMER    - Jatin sharma
***************************************************************************************************************************/

int main()
{
	float p,r,t,amount,ci;
	printf("Enter the Principle value : ");
	scanf("%f", &p);
	printf("Enter the rate : ");
	scanf("%f", &r);
	printf("Enter the time Period in years : ");
	scanf("%f", &t);
	
	amount= p*pow(1+r/100,t);
	ci=amount-p;

	printf("Compound Interest is : %f", ci);
	getch();
	return 0;
}
