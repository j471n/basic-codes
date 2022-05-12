# Fibonacci series:
# the sum of two elements defines the next
n = int(input("Enter Number : "))
a = 0
b = 1
while a < n:  #the value 50 can change 
    print(a, end = ", ")
    a= b
    b = a+b
input("\npress ENTER to exit.")

