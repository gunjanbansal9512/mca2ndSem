#Root of quardatic equation
import cmath
a=int(input("Enter the value of a"))
b=int(input("Enter the value of value of b"))
c=int(input("Enter the value of c"))
r=(b**2-4*a*c)
root1=((-b)+cmath.sqrt(r))/2*a
root2=((-b)-cmath.sqrt(r))/2*a
print("Root 1 is",root1)
print("Root 2 is",root2)