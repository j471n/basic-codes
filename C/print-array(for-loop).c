#include<stdio.h>
#include<conio.h>


/*****************************************************************************************************
AIM      -   WAP to input 5 elements in an integer Array using assignment operator and print the su of 1 and last & print the all elements
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input 5 elements in an integer Array using assognment operator and print the su of 1 and last & print the all elements\n");
	int a[5]={1,2,3,4,5},sum, i;
	
	sum=a[0]+a[4];
	printf("sum = %d\n",sum);
	for(i=0;i<5;i++)
	{
		printf("%d\n", a[i]);
	}
	getch();
	return 0;

}


