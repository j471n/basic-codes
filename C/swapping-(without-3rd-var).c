#include<stdio.h>
#include<conio.h>

/******************************************************************
AIM   - WAP  for swaping of two no. without using 3rd variable
PROGRAMMER    - Jatin sharma
*****************************************************************/

int main()
{
	printf("AIM   - WAP  for swaping of two no. without using 3rd variable\n");
    int a, b, c;
    printf("Enter the value of a and b :");
    scanf("%d%d", &a, &b);
    
	a=a+b;
	b=a-b;
	a=a-b;
    printf("%d%d", a, b);
    getch();
    return 0;
}
