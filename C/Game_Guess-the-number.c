#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_gen();  //function updated

int main(){
      int guess,num, attempts =1;

      num = random_gen();  

      do{
            printf("Guess the number between 1-100 : ");
            scanf("%d", &guess);

            if (guess<num){
                  printf("Higher Number Please!\n");
            }
            else if (guess>num){
                  printf("Lower Number Please!\n");
            }
            else
            {
                  printf("You guessed the number in %d attempts.", attempts);
            }
            attempts++;
            
      }while (guess!=num);
      
      return 0;
}

//random number generating function
int random_gen(){
      int number;
      srand(time(0));
      number = rand()%100 + 1; // Generating a random numberl
      return number;

}
