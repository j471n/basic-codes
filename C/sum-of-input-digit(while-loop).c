#include<stdio.h>
#include<conio.h>

/************************************************************************************************
AIM    -    WAP to input a 4 digit no. and find out the sum of all digits by using while loop
PROGRAMMER    - Jatin sharma
OBJECT -     use of While-loop
*************************************************************************************************/

int main()

{
	printf("WAP to input a digit and find out the sum of all digits by using while loop\n");
	int n,a,s=0;
	printf("Input  Digits : ");
	scanf("%d", &n);
	
	while (n!=0)
	
	{
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("sum of these digit is : %d", s);
	getch();
	return 0;
}
