#Multipication of two matrix
r1=int(input("Enter the row of 1st matrix"))
c1=int(input("Enter the column of 1st matrix"))
r2=int(input("Enter row of 2nd matrix"))
c2=int(input("Enter column of 2nd matrix"))
m1=[[0 for i in range (c1)] for j in range (r1)]
m2=[[0 for i in range (c2)] for j in range (r2)]
print("Enter matrix 1")
for i in range(r1):
    for j in range(c1):
        m1[i][j]=int(input(""))
print("Enter matrix 2")
for i in range(r2):
    for j in range(c2):
        m2[i][j]=int(input())
print("Your 1st matrix is ",m1)
print("Your 2nd matrix is ",m2)
r=[[0 for i in range(c2)] for j in range(r1)]
if(c1 != c2):
    print("Multipication is not possible")
    exit
for i in range(r1):
    for j in range(c2):
        for k in range(r2):
            r[i][j]+=m1[i][k]*m2[k][j]
print("Result is ",r)