#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void save(void);
void show(void);
int search(struct database, int n, char x);

struct database
{
    char name[20];
    char username[20];
    char password[20];
}data[10];

int main()
{
    int a;
    puts("What do you wanna do ?");
    printf("1. Save passwords\n2. Show password\n");
    printf("Choose the Option : ");
    scanf("%d", &a);
    
    if (a ==1){
        
        save();
    }
    else
    {
        show();
    }
    
        
    return 0;



}

void save(void){

    static int i;
    char b;

    for (i=0 ;  i<1; i++){

        printf("\nEnter the name : ");
        scanf("%s", data[i].name);

        printf("Username : ");
        scanf("%s", data[i].username);

        printf("Password : ");
        scanf("%s", data[i].password);
    }
    printf("Do you wanna see paswords (y/n) : ");
    scanf("%c", &b);
    if (b =='y' || b=='Y'){
        show();
    }
    
}

void show(void){

    char check,c;
    int j,n;
    int result;
    printf("Enter the name you want to search :" );
    scanf("%c", &check);
    n = sizeof(data);

    result = search(data, n, check); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 

    // for (j=0;j<50;j++){

    //     if (check == data[j].name){
    //         printf("\nusername : %s", data[j].username);
    //         printf("You really wanna see the password (y/n) : ");
    //         scanf("%c", &c);
    //         if (c =='y'|| c == 'Y'){
    //             printf("Password : %s", data[j].password);

    //         }
    //         else{
    //             puts("*****Inalid Input*****");
    //         }
            
    //     }
    //     else{
    //         puts("#########Invalid Input################");
    //     }
        
    // }


}
int search(struct database, int n, char x) 
{ 
    int p; 
    for (p = 0; p < n; p++) 
        if (data.name[p] == x) 
            return p; 
    return -1; 
} 
