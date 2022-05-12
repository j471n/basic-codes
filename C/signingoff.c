#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int pass(void);
int cases(int r);
int choice(void);
char final_des(void);


int main()
{
    //input the values
	int r;


    pass();
    getch();
    return 0;


}



int pass(void)
{
    int p=0;
    int password[20] ;
    int i;
    int k;
    char l;
    //char final;

    k = choice();


    if (k > 4)
    {
        printf("Error. You Entered a wrong choice. Please try again and select carefully.\n");
    }
    else
    {
       
        

        for (i=0 ; i<3 ; i++){

            //password condition

            printf("Enter login : ");
            do
            {
                password[p]=getch();
                if(password[p]!='\r'){
                    printf("* ");
                }
                p++;
            }while(password[p-1]!='\r');
            password[p-1]='\0';


            if (password[0] == '8' && password[1] == '6' && password[2] == '6' && password[3] == '9'){
                   
                l = final_des();
                if (l == 'y' || l == 'Y'){
                    cases(k);
                    break;
                }
               

               
            }
            else
            {
                puts("\nError. You have entered a wrong password. Please try again.");
                if (i ==2)
                {
                    printf("\n*************************Exiting from the program.*************************");
                    void exit();
                }
            }
            

            
        }

    }

}


int cases(int r)
{
    switch(r)
    {
        case 1 : printf("\nSigning off your System in 10 seconds.\n");
        //system("C:\\Windows\\System32\\shutdown -s -t 10");
        break;

        case 2 : printf("\nRestarting Your System in 10 seconds.\n");
        //system("C:\\Windows\\System32\\shutdown -r -t 10");
        break;

        default : printf("\nError. You Entered a wrong choice. Run program again and select carefully.\n");
        break;
    }
}

int choice(void)
{
    int ch;
    puts("What do you want to do ?");
	puts("1. Shutdown the System in 10 seconds\n2. Restart the System in 10 seconds\n3. Shutdown the System in a minute\n4. Restart System in a minute\n");
	printf("Enter Your Choice : ");
	scanf("%d", &ch);
    return ch;

}

char final_des(void){

    char final;
    printf("\nDo you really wanna do this. (y/n) : ");
    scanf("%c", &final);
    return final;
}
