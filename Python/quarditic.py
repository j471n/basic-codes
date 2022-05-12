# import complex math module
import cmath

#input from the user of Quadratic Equation i.e. ax**2 + bx + c = 0
a = float(input("enter A : "))
b = float(input("enter B : "))
c = float(input("enter C : "))

## calculate the discriminant 
d = (b**2) - (4*a*c)
z = cmath.sqrt(d)

#find two solutions
x = (-b-z)/(2*a)
y = (-b+z)/(2*a)
print("x = {0} \ny = {1}".format(x,y))
