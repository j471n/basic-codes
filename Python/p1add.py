#print statement
print ('This Program is for addition of two numbers.')
print ('Enter the num1 :', end = " " )
#enter number1 by user
num1 = input()
print ('Enter the num2 :', end = " ")
#enter num2 by user with the help of input () function
num2 = input()
"""
we use "int()" here (type_ conversion) because python store variable in string which is entered by the user.
that's we we change the type of the variable to integr.
we can use the funciton "type()" to check the type of the variable. 

"""
sum = int(num1) + int (num2)
print ("sum of {0} and {1} is {2} ". format(num1, num2, sum) )
