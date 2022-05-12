#include<stdio.h>
#include<conio.h>

/****************************************************************************************************************
AIM           - WAP  to input any number and check the no. us divisible by 3 or not
OBJECTIVE     - use of only "if - else" statement
PROGRAMMER    - Jatin sharma
*********************************************************************************************************************/

int main()

{
	printf("WAP  to input any number and check the no. us divisible by 3 or not\n");
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if(n%3==0)
    printf("No. is the divisible by 3");
    else
    printf(" no. is not divisible by 3");
	getch();
    return 0;
}


