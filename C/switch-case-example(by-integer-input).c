#include<stdio.h>
#include<conio.h>

/***************************************************************************************************
AIM           -  WAP a program to using switch case statement for integer
OBJECTIVE     -  use of only "switch" statement
PROGRAMMER    - Jatin sharma
***************************************************************************************************/

int main()

{
	printf("WAP a program to using switch case statement for integer\n");
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    switch(a)
    {
    	case 1 : printf("hello");
    	break;
    	case 2: printf("hiii");
    	break;
    	case 3: printf("welcome");
    	break;
    	default: printf("wrong choice");
    	
	}
    getch();
	return 0;
}

