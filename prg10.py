#write a python program to check wheater to check string is palindrome or not

str1 = str(input("Enter the string"))
print(str1)

#convert the string into lower because capital and small alphabetes are treated diffrentlys

str1.lower()

str2=reversed(str1)

if(list(str1)==list(str2)):
    print("String is pallindrome")

else:
    print("String is not pallindrome")

#example madam malyalam
