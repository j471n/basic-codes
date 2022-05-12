#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to print the sum of between two numbers, by using for-loop
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()

{
	printf("WAP to print the sum of no. between 1 to 10, by using for-loop\n");
	int i,s=0, n, m;
	printf("enter the value of n and m : ");
	scanf("%d%d", &n, &m);
    //clrscr();
    
    for(i=n;i<=m;i++)
    {
    	s=s+i;    
	}
    printf("Sum of the no. between %d to %d is : %d ",n, m, s);
    getch();
    return 0;
	// for example sum between 1-10.
	
}


