# write a program to search element using linear search
n=int(input("Enter size of array"))
a=list()
print("Enter array elements")
for i in range(0,n):
    a.append(int(input()))
key=int(input("Enter the element to search"))
index=0
for i in a:
    if(key==i):
        print("Element found at ",index+1)
        break
    index+=1
if(index==len(a)):
    print("Element not found")
