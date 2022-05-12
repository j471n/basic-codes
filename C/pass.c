#include <stdio.h>
#include <conio.h>

int main()
{
      int i;
      const char pass[10];
      char n;
      printf("enter password:");
      while (1)
      {
            n = getch();
            if (n == 13)
            {
                  pass[i] == '\0';
                  break;
            }
            else
                  pass[i] == n;
            i++;
            printf("*");
      }
      printf(n);
      return 0;
}




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