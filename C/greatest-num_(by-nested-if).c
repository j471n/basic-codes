#include<stdio.h>
#include<conio.h>

/*************************************************************************************************************************
AIM           -  WAP  to input three no. and the greatest between them by using nested-if statement
OBJECTIVE     -  use of only "nested-if" statement
PROGRAMMER    - Jatin sharma
****************************************************************************************************************************/

int main()

{
	printf("WAP  to input three no. and the greatest between them by using nested-if statement\n");
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    
    if (a>b)
    {
    	if(a>c)
    	printf("a is greatest");
    	else
    	printf("c is greatest");
    }
    else if (b>c)
    printf("b is greatest");
    else
    printf("c is greatest");
    getch();
	
    return 0;
}

	
