
#include <stdio.h>
#include<conio.h>

int main(void) {  
    char c;
    printf("This program is for printing the ASCII values of the charachters.\n");
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    printf("Press any key to exit...");
    
    getch();
    return 0;


}
