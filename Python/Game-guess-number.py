import random

#random gnenerator function
def num_generator():
    random_number = random.randint(1, 100)
    return random_number

#main function
def main():
      num = num_generator() #calling fucnction
      attempts = 1 #to count the the attempts

      # Loop for whole game
      while (num!=0):
            guess = int(input("Guess the number (1-100) : "))
            if guess < num:
                  print("Highest Number Please!")
            elif guess > num:
                  print("Lowest Number Please!")
            else:
                  print(f"You guess the number in {attempts} attempts.")
                  break
                  #if the else statement is true loop will be break.            
                  attempts += 1

if __name__ == '__main__':
    main()
