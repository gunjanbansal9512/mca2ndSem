#python script to print number of letter,vowels and percentage of vowels in  a string

dic = {"letter":0,"vowels":0,"percent":0}

str1 = input("Enter word")

#convert the string into lower case

for ch in str1:
    dic["letter"] +=1
    if ch in 'aeiouAEIOU':
        dic["vowels"]+=1
dic["percent"] = (dic["vowels"]*100)/dic["letter"]
print(dic)
