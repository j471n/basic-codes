#include<stdio.h>
#include<conio.h>

/************************************************************************************************
AIM    -    WAP to input the integer no. and check the no. is armstrong or not by using while loop
OBJECT -     use of While-loop
PROGRAMMER    - Jatin sharma

EXPLANATION  -  Armstrong number is a number that is equal to the sum of cubes of its digits. For 
		example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers
*************************************************************************************************/

int main()

{
	printf("WAP to input the integer no. and check the no. is armstrong or not by using while loop\n");
	int n,a,s=0, n1;
	printf("Input  Digits : ");
	scanf("%d", &n);
	n=n1;
	
	while (n!=0)
	
	{
		a=n%10;
		s=s+a*a*a;
		n=n/10;
	}
	if (s==n1)
	printf("No. is Armstrong");
	else 
	printf("No. is not Armstrong");
	getch();
	return 0;
}
