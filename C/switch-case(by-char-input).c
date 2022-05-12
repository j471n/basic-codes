#include<stdio.h>
#include<conio.h>

/*************************************************************************************
AIM           -  WAP a program to using switch case statement for character
OBJECTIVE     -  use of only "switch" statement
PROGRAMMER    - Jatin sharma
***************************************************************************************/

int main()

{
	printf("WAP a program to using switch case statement for character\n");
    char d;
    printf("Enter the character value : ");
    scanf("%c", &d);
    
    switch(d)
    {
    	case 'a': printf("hello");
    	break;
    	case 'b' : printf("hiii");
    	break;
    	case 'c' : printf("welcome");
    	break;
    	default: printf("wrong choice");
    	
	}
    getch();
	return 0;
}

