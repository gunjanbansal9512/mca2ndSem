#python script to check senetence panagram or not

def check_pan(s):
    s.lower()
    l = []
    for i in range(26):
        l.append(False)
    for ch in s:
        if not ch==' ':
            l[ord(ch)-ord('a')]= True
    for ch in l:
        if ch == False:
            return False

    return True

s = "The quick brown fox jumps over the little lazy dog"

if(check_pan(s)):
    print("Sentence is panagram")
else:
    print("Sentence is not panagram")
