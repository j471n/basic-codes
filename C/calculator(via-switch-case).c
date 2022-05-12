#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM   -    WAP to input two integer value and perform add, sub, mul, div, based by user choice
1-add
2-sub
3-mul
4-div

OBJECT   - use of "switch" statement
PROGRAMMER    - Jatin sharma

*************************************************************************************************/

int main()

{
	printf("WAP to input two integer value and perform add, sub, mul, div, based by user choice\n");
    float a, b;
    int ch;
    float result;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("1 = Addition, 2 = subtraction, 3 = multiplication, 4 = division\n");
    printf("input the choice entered by user");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1: result=a+b;
        break;
        case 2:result = a-b;
        break;
        case 3 : result= a*b;
        break;
        case 4: result = a/b;
        break;
        default : printf("wrong choice");
    }
    
    printf("%f", result);
    getch();
    return 0;
}


