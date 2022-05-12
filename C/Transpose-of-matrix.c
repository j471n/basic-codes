#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 3x3 matrix and print the transpose of all the elements
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
*************************************************************************************************/

int main()
{
	printf("WAP to input 3x3 matrix and print the transpose of all the elements\n");
	int a[3][3], i,j;
	
	printf("input int no. for 3x3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
			
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
			
	}
    
	getch();
	return 0;

}



