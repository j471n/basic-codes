#include<stdio.h>
#include<conio.h>


/***********************************************************************************************
AIM      -    WAP to print the average of between 1 to 10 numbers, by using for-loop
OBJECT   -    use of "for-loop"
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()

{
	printf("WAP to print the average of between 1 to 10 numbers, by using for-loop\n");
	float i,s=0;
	float avg;
	
    //clrscr();
    
    for(i=1;i<=10;i++)
    {
    	s=s+i;    
    	avg=s/10;
	}
    printf("average of the no. between 1 to 10 is : %f ", avg);
    getch();
    return 0;
}


