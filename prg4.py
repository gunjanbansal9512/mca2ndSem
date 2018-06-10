#write a program to search an element using binary search
def binarysearch(a,low,high,key):
    mid=(low+high)//2
    if(low>high):
        print("Element not found")
        return
    if(a[mid]==key):
        print("Element found at ",mid+1)
        return
    elif(a[mid]>key):
        return binarysearch(a,low,mid-1,key)
    elif(a[mid]<key):
        return binarysearch(a,mid+1,high,key)
n=int(input("Enter the size of array"))
a=list()
print("Enter array elements")
for i in range(0,n):
    a.append(int(input()))
a.sort()
print("Array is ",a)
key=int(input("Enter the elements to search"))
binarysearch(a,0,n-1,key)
