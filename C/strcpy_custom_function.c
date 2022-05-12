#include <stdio.h>

/************************************************************************************************
 
AIM         -    Make a custom Function of Strcpy()
Programmer  -    Jatin Sharma

************************************************************************************************/

//strcpy custom function
void copy(char *target, char *source)
{
      int i = 0;

      //looping
      while (source[i] != '\0')
      {
            target[i] = source[i];
            i++;
      }
     //it will put \0 in the end of he string
     target[i] = '\0';
}

int main()
{

      char str1[30];
      char str2[30]; 

      printf("This is the program of custom Function of Strcpy().\n");
      printf("Enter the first string : ");
      gets(str1);
      printf("Enter the second string : ");
      gets(str2);

      //copy(target, source) this is an example
      copy(str1, str2);       //fucntion with argument without return value

      printf("This is the second string after copying from first : %s", str2);

      return 0;
      
}