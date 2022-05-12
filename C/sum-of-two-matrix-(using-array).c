#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input two 3x3 matrix and print the addition matrix
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
******************************************************************************************************/

int main()
{
	printf("WAP to input two 3x3 matrix and print the addition matrix\n");
	int a[3][3], b[3][3], c[3][3], i,j;
	
	printf("input int no. for 3x3 matrix A1 : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);	
		}
			
	}
	
	printf("input int no. for 3x3 matrix A1 : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
			
	}


	for(i=0;i<3;i++)                      
	{
		for(j=0;j<3;j++)
		{
		  c[i][j]=a[i][j]+b[i][j];
		  printf("%d\t", c[i][j]);
		}
		printf("\n");
			
	}
	
	getch();
	return 0;

}



