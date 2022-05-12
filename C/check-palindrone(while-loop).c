#include<stdio.h>
#include<conio.h>

/************************************************************************************************
AIM    -    WAP to input a digit and check the no. is palindrone or not by using while loop
PROGRAMMER    - Jatin sharma
OBJECT -     use of While-loop
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

INPUT = 121
OUTPUT = 121  //num will called as palindrone
*************************************************************************************************/

int main()

{
	printf("WAP to input a digit and check the no. is palindrone or not by using while loop\n");
	int n,a,s=0, n1;
	printf("Input  Digits : ");
	scanf("%d", &n);
	n=n1;
	
	while (n!=0)
	
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	if (s==n1)
	printf("No. is palindrone");
	else 
	printf("No. is not palindrone");
	getch();
	return 0;
}
