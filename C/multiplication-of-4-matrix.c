#include<stdio.h>        //herader file
#include<math.h>

/******************************************************************
Aim- Multiplication of two matrix
PROGRAMMER    - Jatin sharma
*******************************************************************/


int main()
{
    //input through the keyboard

	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],f[3][3],g[3][3],i,j,k;
	
    /*Loop for entering the first matrix by the keyboard*/

	for(i=0;i<3;i++)              
	{
		for(j=0;j<3;j++)
		{
 			printf("Enter the A%d%d element of matrix A1\n",i,j);
			scanf("%d", &a[i][j]);
		}
		
	}

    /*Loop for entering the second matrix by the keyboard*/  

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
 			printf("Enter the B%d%d element of matrix A3\n",i,j);
			scanf("%d", &b[i][j]);
		}
		
	}
	/*Loop for entering the third matrix by the keyboard*/

    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
 			printf("Enter the B%d%d element of matrix A3\n",i,j);
			scanf("%d", &c[i][j]);
		}
		
	}

    /*Loop for entering the fourth matrix by the keyboard*/

    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
 			printf("Enter the B%d%d element of matrix A4\n",i,j);
			scanf("%d", &d[i][j]);
		}
		
	}


    /*Main logic behind the multiplication -1 */

   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			e[i][j]=0;
			
			for(k=0;k<3;k++)
			{
				e[i][j]=e[i][j]+ a[i][k]*b[k][j];
			}
 			
		}
		
	}

	/*Main logic behind the multiplication -2 */

    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			f[i][j]=0;
			
			for(k=0;k<3;k++)
			{
				f[i][j]=f[i][j]+ c[i][k]*d[k][j];
			}
 			
		}
		
	}

    /*Main logic behind the multiplication -3 */

    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			g[i][j]=0;
			
			for(k=0;k<3;k++)
			{
				g[i][j]=g[i][j]+ e[i][k]*f[k][j];
			}
 			
		}
		
	}

    /*Final Print the valur through for-loop */

	printf("The Multiplication of matrix is given below\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
 			printf("%d\t", g[i][j]);
		}
		printf("\n");
		
	}

	return 0;

}
