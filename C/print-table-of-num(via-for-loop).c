#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to input a number and print the table of thatnumber, by using for-loop
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma

*************************************************************************************************/

int main()

{
	printf("WAP to input a number and print the table of thatnumber, by using for-loop\n");
	int i,n,m;
    //clrscr();
    printf("enter a number : ");
    scanf("%d", &n);
    printf("Table of %d\n", n);
    
    for(i=1;i<=10;i++)
    {
    	m=n*i;
        printf("%d * %d : %d\n", n,i, m);
	}
    
    getch();
    return 0;
}



