/***************************************************************************************************
 
AIM         -     Making game of rock, paper and Scissor by using fucntions and if-else statement;  
Programmer  -     jatin sharma

****************************************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//declaration of game fucntion
int game(char var1, char var2);

int main(){

      
      char user, computer;
      int num, result;
      //printing first statement
      printf("This is the game of rock, paper and scissors.\n\nPress 'r' or rock\nPress 'p' or paper\nPress 's' or scissor\n\nEnter your Choice : \n");
      scanf("%c", &user);

      // Generating a random numberl
      srand(time(0));
      num = rand() % 100 + 1; 

      //deciding what to choose for computer by generating random no. and if-else statement for equal chances.
      if (num<=33){
            computer = 'r';
      }
      else if (num>33 && num<=66)
      {
            computer = 'p';
      }
      else
      {
            computer = 's';
      }

      //sending user and computer as an argument for game function 
      result = game(user, computer);

      //if the result is 1 then use wins else the computer wins
      if (result == 1){
            printf("Congratulation! You Won.\n");

      }
      else{
            printf("You Loose! Better Luck Next Time........0.0");
      }
      

      return 0;
}


//game fucntion 
int game(char var1, char var2){

      //in this fucntion var1 = 'user' & var2 = 'computer'


      //three variables for printing choices 
      char rock[] = "rock";
      char paper[] = "paper";
      char scissor[] = "scissor";
      
      //if the users and computers input are same
      if (var1==var2){
            printf("Game Draw! \n");
      }

      //user choose rock where computer choose paper
      if (var1 == 'r' && var2 == 'p')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", rock, paper);
            return -1;
      }
      //user choose paper where computer choose rock
      else if (var1 == 'p' && var2 == 'r')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", paper, rock);
            return 1;
      }
      //user choose paper where computer choose scissor
      if (var1 == 'p' && var2 == 's')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", paper, scissor);
            return -1;
      }
      //user choose scissor where computer choose paper
      else if (var1 == 's' && var2 == 'p')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", scissor, paper);
            return 1;
      }
      //user choose scissor where computer choose rock
      if (var1 == 's' && var2 == 'r')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", scissor, rock);
            return -1;
      }
      //user choose rock where computer choose scissor
      else if (var1 == 'r' && var2 == 's')
      {
            printf("You choose '%s' and Computer choose '%s'.\n", rock, scissor);
            return 1;
      }
}
