#include<stdio.h>
#include<conio.h>

/************************************************************************************************
AIM    -    WAP to input a  digit and print the reverse of all digits by using while loop
PROGRAMMER    - Jatin sharma
OBJECT -     use of While-loop
*************************************************************************************************/

int main()

{
	printf("WAP to input a  digit and print the reverse of all digits by using while loop\n");
	int n,a,s=0;
	printf("Input  Digits : ");
	scanf("%d", &n);
	
	while (n!=0)
	
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	printf("reverse of these digit is : %d", s);
	getch();
	return 0;
}
