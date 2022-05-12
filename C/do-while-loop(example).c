#include<stdio.h>
#include<conio.h>

/****************************************************************************************
AIM    -    WAP to print hello 10 times by using do while loop
PROGRAMMER    - Jatin sharma
OBJECT - use of do While-loop
***************************************************************************************/

int main()

{
	printf("WAP to print hello 10 times by using do while loop\n");
	int i=0;
	do
	{
		printf("Hello\n");
		i++;
	}
	while(i<10);
	getch();
	return 0;
}
