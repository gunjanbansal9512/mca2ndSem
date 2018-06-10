# Write a python program to read a word and prints the number of letter,vowels and percentage of vowels in the word using python
word=input("Enter the word")
dicty={'Letters':0,'Vowels':0,'Percentage':0}
for ch in word:
    dicty['Letters']+=1
    if ch in 'AEIOUaeiou':
        dicty['Vowels']+=1
dicty['Percentage']=(dicty['Vowels']*100)//dicty['Letters']
print(dicty)