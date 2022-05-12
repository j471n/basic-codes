#Programmer: Jatin Sharma

import string
from random import choice

def generate_password(size):
    all_chars = string.ascii_letters + string.digits + string.punctuation
    password = ""
    for _ in range(size):
        random_char = choice(all_chars)
        password += random_char
    
    return password


def main():
    pass_length = int(input("How many character should be in your password : "))
    password = generate_password(pass_length)

    print("Your Password : " + password)


if __name__ == '__main__':
    main()