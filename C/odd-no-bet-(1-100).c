#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to print the odd no. between 1 to 100, by using for-loop
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()

{
	printf("WAP to print the odd no. between 1 to 100, by using for-loop\n");
	int i;
    //clrscr();
    
    for(i=1;i<=100;i++)
    {
    	if(i%2!=0)
        printf("%d, ",i);
	}
    
    getch();
    return 0;
}


