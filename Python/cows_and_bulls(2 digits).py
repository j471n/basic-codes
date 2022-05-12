#programmer : Jatin Sharma

"""
SUMMARY :

The Cows and Bulls is a number guessing game. In this game, the user guesses a number. Usually, the number will be a 4 digit number. However, here we will try with 2 digits number first

So, if the user guesses the number correctly. he/she will win. If they didn't guess the exact number, then you will calculate the bulls and COWS.

Let's say the number is: 8529

And your guess is: 3428

If you guess any position digit currently. you will get a bull. For your guess, you didn't match the first second or the last digit. However, you guess the 3rd digit correctly. Hence your bulls will be 1.

On the other hand, if one or more digits of the secret number exist in your guess, you will get a cow.

In summary, if you matched the digit with the position, you will get a bull. On the other hand, if you have the digit in a different place, it will cows.

In the above guess, you have 8 in the 4th position. The 8 exists in the secret number in a different location, that's why you will get 1 COW.


"""


from random import randint


def bulls_cows(secret_number):
    remaninig_try = 10

    while remaninig_try > 0:

        player_guess = input("Enter your guess : ")

        if player_guess == secret_number:
            print("Yay! You guessed it!\nYOU WIN")

        else:
            bulls = 0
            cows = 0

            if player_guess[0] == secret_number[0]:
                bulls += 1
            if player_guess[1] == secret_number[1]:
                bulls += 1
            if player_guess[0] == secret_number[1]:
                cows += 1
            if player_guess[1] == secret_number[0]:
                cows += 1

            print("Bulls : ", bulls)
            print("Cows : ", cows)

            remaninig_try -=1

            if remaninig_try < 1:
                print("You lost the game.")
                break


def main():
    secret_number = str(randint(10, 100))
    print("Guess the number, It contains 2 digits.")
    print(secret_number)
    bulls_cows(secret_number)


if __name__ == "__main__":
    main()