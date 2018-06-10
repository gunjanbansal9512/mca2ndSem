# Write a program to sum all the elements from n1 to n2 where n1 and n2 are positive number
n1=int(input("Enter the vslue of n1"))
n2=int(input("Enter the value of n2"))
sum=0
if(n1<n2):
    for i in range(n1,n2+1):
        sum=sum+i
else:
    for i in range(n2,n1+1):
        sum=sum+1

print("Sum of numbers between n1 and n2 is ",sum)
