#include <stdio.h>
#include <string.h>

/************************************************************************************************
 
AIM         -    Ask use to encrypt or decrypt message and take the message as input and covert
                 into encrypted message or decrypted message.
Programmer  -    Jatin Sharma

************************************************************************************************/

//three functions
void encrypting_message(void);
void decrypting_message(void);
void thanks(void);


//main functions
int main()
{
      //declaration
      char choice[10];
      char encrypt[] = "encrypt";
      char encrypt2[] = "e";

      //asking for the choice from user
      printf("This Program is for making message Encrypt and Decrypt.\nWhat do You wanna do : ");
      gets(choice);


      if (strcmp(choice, encrypt) == 0 || strcmp(choice, encrypt2) == 0)
      {
            encrypting_message();  //function call by value
      }
      else
      {
            decrypting_message(); //function call by value
      }


      return 0;
}


//declaratin of the encrpted function
void encrypting_message(void)
{
      char message[100];
      int i = 0;

      //taking message to encrypt
      printf("Enter the message to Encrypt : ");
      gets(message);

      //while loop
      while (message[i] != '\0')
      {
            message[i] = message[i] + 2;
            i++;
      }

      //printing the encrypted message
      printf("Encrypted Message : %s", message);
      thanks();
}

void decrypting_message(void)
{
      char message[100];
      int i = 0;

      //taking message to decrypt
      printf("Enter the message to Decrypt : ");
      gets(message);
      while (message[i] != '\0')
      {
            message[i] = message[i] - 2;
            i++;
      }

      //printing the decrypted message
      printf("Encrypted Message : %s", message);
      thanks();
}


//thanks function just for fun
void thanks(void){
      printf("Thanks for using!........peace.!");
}