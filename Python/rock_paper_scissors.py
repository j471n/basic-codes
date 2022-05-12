from random import choice

def get_winner(p1, p2):

    if p1 == "rock" and p2 == "paper":
        print(f"Computer Choose '{p1}', You won!")
    elif p1 == "paper" and p2 == "rock":
        print(f"Computer Choose '{p1}', Computer Won!")
    elif p1 == "rock" and p2 == "scissor":
        print(f"Computer Choose '{p1}', Computer Won!")
    elif p1 == "scissor" and p2 == "rock":
        print(f"Computer Choose '{p1}', You Won!")
    elif p1 == "paper" and p2 == "scissor":
        print(f"Computer Choose '{p1}', You Won!")
    elif p1 == "scissor" and p2 == "paper":
        print(f"Computer Choose '{p1}', Computer Won!")
    else:
        print(f"Computer Choose '{p1}', Is a Tie")



def main():
    choose = ["rock", "paper", "scissor"]
    computer = choice(choose)
    user = input("Enter You guess (rock, paper, scissor) : ")

    get_winner(computer, user)

if __name__ =="__main__":
    main()
