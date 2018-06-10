# using an stack to evaluate arthematic expression
prio={'%':4,'/':3,'*':3,'+':2,'-':2,'(':1,')':1}
def convert(expr):
    stack=list()
    postfix=list()

    for ch in expr:
        if ch.isdigit():
            postfix.append(ch)
        elif ch=='(':
            stack.append(ch)
        elif ch==')':
            while stack[-1]!='(':
                postfix.append(stack.pop())
            stack.pop()
        elif ch in '%/*+-':
            while len(stack) and prio[ch] <= prio[stack[-1]]:
                postfix.append(stack.pop())
            stack.append(ch)
    while len(stack):
        if stack[-1]=='(':
            stack.pop()
        else:
            postfix.append(stack.pop())
    return postfix


exp=input("Enter the expression")
epxr=convert(exp)
print(epxr)
