#include<stdio.h>
#include<conio.h>

/****************************************************************************************************************
AIM           - WAP  to input three numbers and print the greatest between them using only "if" statement
OBJECTIVE     - use of only "if" statement
PROGRAMMER    - Jatin sharma
*********************************************************************************************************************/

int main()

{
	printf("WAP  to input three numbers and print the greatest between them using only if statement\n");
    int a, b, c, big;
    printf("Enter the value of a, b, and c : ");
    scanf("%d%d%d", &a, &b, &c);
    big=a;
    if(b>big)
    big=b;
    if(c>big)
    big=c;
    
	printf("%d", big);
	
    getch();
    return 0;
}

