# Write a python program to check the given string is palindrome or not
s1=input("Enter the string")
print("Your string is ",s1)
s1.lower()
s2=s1[::-1]
if(s1==s2):
    print("String is palindrome")
else:
    print("String is not palindrome")
# Example madam,malayalam,121,1221