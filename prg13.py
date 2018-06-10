#Program to open file in read mode write mode, check current file pointer,Reposition of file pointer
while True:
    ch=input("Enter 1 for open file in read mode\nEnter 2 to open file in write mode\nenter 3 to check current file pointer\nEnter 4 For reposition of pointer\nEnter 5 to exit ")
    if ch=='1':
        with open("file1",'r') as fp:
            content=fp.read()
        print("Content of file is ",content)
    elif ch=='2':
        with open("file1",'w') as fp2:
            fp2.write("Hello There")
    elif ch=='3':
        with open('file1','r') as fp:
            content=fp.read()
            print("Current file pointer is",fp.tell())
    elif ch=='4':
        with open('file1','r') as fp:
            content=fp.read()
            print("Current file pointer is",fp.tell())
            fp.seek(0,0)
            print("Pointer position after seek",fp.tell())
    else:
        break
