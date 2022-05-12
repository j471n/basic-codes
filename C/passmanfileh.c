#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void show(void);

struct database
{
    char name[20];
    char username[20];
    char password[20];
}data[10];

int main(void){

    int i;
    char str[1000];
    //char str[30] = "hello this is jatin sharma";
    FILE *fp;
    fp = fopen("passwordman.txt", "a");
    if (fp == NULL){
        puts("File does not exist");
    }
    else{
        
    puts("File opened successfully.");

       

        printf("Enter the name, username , password respectively.................. \n");
        scanf("%s", str);

            // printf("Enter the Username : \n");
            // scanf("%s", data[i].username);

            // printf("Enter the Password : \n");
            // scanf("%s", data[i].password);

        fprintf(fp, "%s", str );
            // fprintf(fp, "%s", data[i].username );
            // fprintf(fp, "%s", data[i].password);
            



        fclose(fp);
        
    }
    
}

// void show(void){

//     char check,c;
//     int j,n;
//     int result;
//     printf("Enter the name you want to search :" );
//     scanf("%c", &check);

//     for (j=0;j<50;j++){

//         if (check == data[j].name){
//             printf("\nusername : %s", data[j].username);
//             printf("You really wanna see the password (y/n) : ");
//             scanf("%c", &c);
//             if (c =='y'|| c == 'Y'){
//                 printf("Password : %s", data[j].password);

//             }
//             else{
//                 puts("*****Inalid Input*****");
//             }
            
//         }
//         else{
//             puts("#########Invalid Input################");
//         }
        
//     }


