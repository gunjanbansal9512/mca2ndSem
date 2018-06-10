#Write a program to insert a number in sorted array
n=int(input("Enter the size of array"))
a=[]
print("Enter the array elements")
for i in range(n):
    a.append(int(input()))
a.sort()
print("Sorted array is ",a)
item=int(input("Enter the element to insert"))
i=0
while item>a[i] and i<len(a)-1:
    i+=1
if(i==len(a)-1):
    a.insert(i+1,item)
else:
    a.insert(i,item)
print("Array is",a)