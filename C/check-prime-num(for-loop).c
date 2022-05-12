#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to input a number and check the number is prime number or not, by using for-loo
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()

{
	printf("WAP to input a number and check the number is prime number or not, by using for-loop\n");
	int i, n, m=0;
    //clrscr();
	printf("enter the value of n : ");
	scanf("%d", &n);
    for(i=2;i<n;i++)
  
    {
    	  if(n%i==0)
    	  m=1;
	}
	if(m!=0)
	printf("no is not prime");
	else
    printf("Number is prime");
    getch();
    return 0;
}
