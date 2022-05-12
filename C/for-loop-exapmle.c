#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM           -    WAP to print "hello" 10 times by using for-loop
OBJECT        -    use of "for-loop"
PROGRAMMER    - Jatin sharma

*************************************************************************************************/

int main()

{
	printf("WAP to print 'HELLO' 10 times by using for-loop\n");
	int i, n ;
	printf("enter the value to print hello : ");
	scanf("%d", &n);
    //clrscr();
    for(i=0;i<=n;i++)
    printf("hello ");
    getch();
    return 0;
}



