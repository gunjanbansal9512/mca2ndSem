#write a program to simulate stack
top=-1
stack=list()
n=0
def push(ele):
    global top
    if(top==n-1):
        print("Stack overflow")
    else:
        top+=1
        stack.insert(top,ele)
def pop():
    global top
    if(top==-1):
        print("Stack underflow")
    else:
        print(stack[top]," poped from stack")
        top-=1
def display():
    if top==-1:
        print("Stack is empty")
    else:
        for i in stack:
            print(i)
n=int(input("Enter the size of stack"))
while True:
    print("Enter 1 for push\n Enter 2 for pop\n Enter 3 for display\n Enter 4 for exit ")
    ch=int(input())
    if(ch==1):
        ele=int(input("Enter the element to push"))
        push(ele)
    elif ch==2:
        pop()
    elif ch==3:
        display()
    elif ch==4:
        print("Program exit")
        break
    else:
        print("Wrong input Try Again")
