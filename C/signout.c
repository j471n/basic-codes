#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
    //input the values
	int ch, password, i;
    
	puts("What do you want to do ?\n");
	puts("1. Shutdown the System\n2. Restart the System\n");
	printf("Enter Your Choice : ");
	scanf("%d", &ch);

 //checking user choice is he right or wrong.

    if (ch > 2)
    {
        printf("Error. You Entered a wrong choice. Please try again and select carefully.\n");
    }
    else
    {
        //entering the password for shutdown or restart

        printf("Enter login : ");
        scanf("%d", &password);
        
        //it's loop for checking password is right or wrong three times.

        for (i=0 ; i<3 ; i++)
        { 
            //password condition

            if (password == 8669)       
            {
                //cases of the program
                switch(ch)
                {
                    case 1 : printf("Shuttting down your System in a minute.\n"); 
                    system("C:\\Windows\\System32\\shutdown -s");
                    break;
                        
                    case 2 : printf("Restarting Your System in a minute.\n");
                    system("C:\\Windows\\System32\\shutdown -r");
                    break;
            
                    default : printf("Error. You Entered a wrong choice. Run program again and select carefully.\n");
                    break;
                }
                break;
            }
            else
            {
                puts("Error. You have enterd a wrong password. Please try again.\n");
                if (i ==2)
                {
                    printf("*************************Exiting from the program.*************************");
                }
            }  
            
        }
    }
    getch();
    return 0;
	
}
