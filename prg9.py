a=[]
n=int(input("Enter how many elements you want to insert in the array"))
for i in range(n):
    a.append(int(input("")))
a.sort()
key = int (input("Enter the element to insert"))
i=0
while (key>a[i] and i<len(a)-1):
    i+=1
if(i==len(a)-1):
    a.append(key)
else:
    a.insert(i,key)
print(a)
