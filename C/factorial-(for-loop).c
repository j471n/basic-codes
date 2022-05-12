#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to input a number and print the factorial of that number, by using for-loop
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()

{
	printf("WAP to input a number and print the factorial of that number, by using for-loop\n");
	int i,s=0, n, f=1;
	float avg;
	printf("enter the value of n : ");
	scanf("%d", &n);
    //clrscr();
    
    for(i=1;i<=n;i++)
    {
    	f=f*i;
	}
    printf("Factorial of %d is : %d", n, f);
    getch();
    return 0;
}

