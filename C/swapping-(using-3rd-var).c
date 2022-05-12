#include<stdio.h>
#include<conio.h>

/************************************************************
AIM   - WAP  for swaping of two no. using 3rd variable
PROGRAMMER    - Jatin sharma
************************************************************/

int main()
{
	printf("AIM   - WAP  for swaping of two no. using 3rd variable\n");
    int a, b, c;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a, &b);
    
	c=a;
	a=b;
	b=c;
    printf("%d%d", a, b);
    getch();
    return 0;
}
