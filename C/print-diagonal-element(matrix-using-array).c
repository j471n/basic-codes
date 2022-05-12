#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 3x3 matrix and print only diagonal elements
OBJECT   -   use of Array
*************************************************************************************************/

int main()
{
	printf("WAP to input 3x3 matrix and print only diagonal elements\n");
	int a[3][3], i,j;
	
	printf("input int no. for 3x3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
			
	}
	for(i=0;i<3;i++)                          // this is for main diagonal which is 00,11,22
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
			
	}
	for(i=0;i<3;i++)                        // this is for secondary diagonal which are 02,11,20
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
			
	}
    
	getch();
	return 0;

}



