#include<stdio.h>
#include<conio.h>
#include<math.h>


/*****************************************************************************************************
AIM      -   WAP to input 3x3 matrix and print the normal and trace of it
OBJECT   -   use of Array
PROGRAMMER    - Jatin sharma
******************************************************************************************************/

int main()
{
	printf("WAP to input 3x3 matrix and print the normal and trace of it\n");
	int a[3][3], i,j,sum1=0,sum2=0,n,normal;
	
	printf("input int no. for 3x3 matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
			
	}

/*****************************************************************
Normal   -  sqrt of sum of squares of all the elements of the matrix
**********************************************************************/
	for(i=0;i<3;i++)                      
	{
		for(j=0;j<3;j++)
		{
		  n=pow(a[i][j],2);
		  sum1=sum1+n;
		}
			
	}
	
	normal=sqrt(sum1);
	printf("normal of the matrix is : %d\n", normal);

/***************************************************************
Trace   -  sum of all main diagonal elements of the matrix
**********************************************************************/
	
	for(i=0;i<3;i++)                     
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum2=sum2+a[i][j];
	    }
	}
    
    printf("trace of matrix : %d",sum2);
	getch();
	return 0;

}



