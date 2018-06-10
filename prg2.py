# Input an array of n numbers and find elements separetly the sum of positive numbers and negative numbers
n=int(input("Enter the size of array"))
a=[]
print("Enter array elements")
for i in range(0,n):
    a.append(int(input("")))
sump=sumn=0
for i in a:
    if i>=0:
        sump+=i
    else:
        sumn+=i
print("Sum of positive numbers ",sump)
print("Sum of negative numbers",sumn)
