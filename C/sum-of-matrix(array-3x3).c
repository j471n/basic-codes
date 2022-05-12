#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 3x3 matrix and print the sum of all the elements
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input 3x3 matrix and print the sum of all the elements\n");
	int a[3][3], i,j,sum=0;
	
	printf("input int no. for 3x3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
			
	}
    
	printf("sum = %d", sum);
	getch();
	return 0;

}


