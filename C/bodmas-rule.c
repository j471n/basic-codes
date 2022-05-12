#include<stdio.h>
#include<conio.h>

/*********************************************************************
AIM   -   WAP for add, sub, mul, div, of two numbers
owner - jatin sharma
*********************************************************************/

void main()
{
    int a, sum, sub, mul;
    float b, div;
    printf("Enter the value of a and b\n");
    scanf("%d%f", &a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    //rem=a%b; ( we cant use remender and div operation at same time)
    printf("%d\n%d\n%d\n%f", sum, sub, mul, div);
    getch();
}
