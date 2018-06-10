# Write a program to check a given sentence is pangram or not using function/module
def check(sentence):
    l=[]
    sentence.lower()
    for i in range(26):
        l.append(False)
    for ch in sentence:
        if ch!=' ':
            l[ord(ch)-ord('a')]=True
    for ch in l:
        if ch==False:
            return False
    return True
sentence=input("Enter the sentence")
if(check(sentence)):
    print("Sentence is panagram")
else:
    print("Sentence is not panagram")
# Example : the quick brown fox jumps over the lazy dog