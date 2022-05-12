#programmer : Jatin Sharma
"""
SUMMARY :

The Cows and Bulls is a number guessing game. In this game, the user guesses a number. Usually, the number will be a 4 digit number.

So, if the user guesses the number correctly. he/she will win. If they didn't guess the exact number, then you will calculate the bulls and COWS.

Let's say the number is: 8529

And your guess is: 3428

If you guess any position digit currently. you will get a bull. For your guess, you didn't match the first second or the last digit. However, you guess the 3rd digit correctly. Hence your bulls will be 1.

On the other hand, if one or more digits of the secret number exist in your guess, you will get a cow.

In summary, if you matched the digit with the position, you will get a bull. On the other hand, if you have the digit in a different place, it will cows.

In the above guess, you have 8 in the 4th position. The 8 exists in the secret number in a different location, that's why you will get 1 COW.


"""


from random import randint


def get_bulls_cows(number, user_guess):
    bulls_cows = [0,0]
    for i in range(len(number)):
        if user_guess[i] == number[i]:
            bulls_cows[0] += 1
        elif user_guess[i] in number:
            bulls_cows[1] += 1

    return bulls_cows
def guessing(secret_number):

    remaninig_try = 10

    while remaninig_try > 0:

        player_guess = input("Enter your guess : ")

        if player_guess == secret_number:
            print("Yay! You guessed it!\nYOU WIN")

        else:
            bulls_cows = get_bulls_cows(secret_number, player_guess)
        
            print("Bulls : ", bulls_cows[0])
            print("Cows : ", bulls_cows[1])

            remaninig_try -= 1

            if remaninig_try < 1:
                print("You lost the game.")
                break


def main():
    secret_number = str(randint(1000, 10000))       
    print("Guess the number, It contains 4 digits.")
    print(secret_number)
    guessing(secret_number)


if __name__ == "__main__":
    main()