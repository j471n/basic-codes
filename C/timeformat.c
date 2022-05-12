#include<stdio.h>
#include<conio.h>

int main()
{
    
    int n1, n2;
    puts("Enter the time in 24:00 format - ");
    scanf("%d:%d", &n1,&n2 );

    switch(n1)
    
    {

        case 1 : printf("\n\nTime in 12th format is - 01 : %d AM\n\n",n2);
                break;
        case 2 : printf("Time in 12th format is - 02 : %d AM\n",n2);
                break;
        case 3 : printf("Time in 12th format is - 03 : %d AM\n",n2);
                break;
        case 4 : printf("Time in 12th format is - 04 : %d AM\n",n2);
                break;
        case 5 : printf("Time in 12th format is - 05 : %d AM\n",n2);
                break;
        case 6 : printf("Time in 12th format is - 06 : %d AM\n",n2);
                break;
        case 7 : printf("Time in 12th format is - 07 : %d AM\n",n2);
                break;
        case 8 : printf("Time in 12th format is - 08 : %d AM\n",n2);
                break;
        case 9 : printf("Time in 12th format is - 09 : %d AM\n",n2);
                break;
        case 10 : printf("Time in 12th format is - 10 : %d AM\n",n2);
                break;
        case 11 : printf("Time in 12th format is - 11 : %d AM\n",n2);
                break;
        case 12 : printf("Time in 12th format is - 12 : %d PM\n",n2);
                break;
        case 13 : printf("Time in 12th format is - 01 : %d PM\n",n2);
                break;
        case 14 : printf("Time in 12th format is - 02 : %d PM\n",n2);
                break;
        case 15 : printf("Time in 12th format is - 03 : %d PM\n", n2);
                break;
        case 16 : printf("Time in 12th format is - 04 : %d PM\n",n2);
                break;
        case 17 : printf("Time in 12th format is - 05 : %d PM\n",n2);
                break;
        case 18 : printf("Time in 12th format is - 06 : %d PM\n",n2);
                break;
        case 19 : printf("Time in 12th format is - 07 : %d PM\n",n2);
                break;
        case 20 : printf("Time in 12th format is - 08 : %d PM\n",n2);
                break;
        case 21 : printf("Time in 12th format is - 09 : %d PM\n",n2);
                break;
        case 22 : printf("Time in 12th format is - 10 : %d PM\n",n2);
                break;
        case 23 : printf("Time in 12th format is - 11 : %d PM\n",n2);
                break;
        case 24 : printf("Time in 12th format is - 12 : %d AM\n",n2);
                break;
    }
    
  printf("\nThanks for using...");




 getch();

}