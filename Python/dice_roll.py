#Programmer : Jatin Sharma
from random import randint

print("Rolling Dice Simulation.")

# Initializing i value to "y"
i = "y"

while i == "y":

    #Generating the random number
    n = randint(1,7)

    #checking Number is 1 or not
    if n == 1:
        print("|---------|")
        print("|         |")
        print("|    0    |")
        print("|         |")
        print("|---------|")

    #checking Number is 2 or not
    if n ==2:
        print("|---------|")
        print("|  0      |")
        print("|         |")
        print("|      0  |")
        print("|---------|")

    #checking Number is 3 or not
    if n == 3:
        print("|---------|")
        print("|  0      |")
        print("|    0    |")
        print("|      0  |")
        print("|---------|")

    #checking Number is 4 or not
    if n == 4:
        print("|---------|")
        print("|  0   0  |")
        print("|         |")
        print("|  0   0  |")
        print("|---------|")

    #checking Number is 5 or not
    if n == 5:
        print("|---------|")
        print("|  0   0  |")
        print("|    0    |")
        print("|  0   0  |")
        print("|---------|")

    #checking Number is 6 or not
    if n == 6:
        print("|---------|")
        print("|  0   0  |")
        print("|  0   0  |")
        print("|  0   0  |")
        print("|---------|")
        
    #Taking user input for roll it again in lowercase
    i = input("Press Y to roll again: ").lower()

else:
    #printing else block
    print("Thanks for using it. ")
