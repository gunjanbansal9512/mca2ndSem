import time
class Time:
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s
    def __str__(self):
        return "Hours {0} , Minute {1}, Second {2}".format(self.h,self.m,self.s)
    def calculate(self,t1,t2):
        self.h=t1.h+t2.h
        self.m=t1.m+t2.m
        self.s=t1.s+t2.s
        if(self.s>=60):
            self.s-=60
            self.m+=1
        if(self.m>=60):
            self.m-=60
            self.h+=1
        if(self.h>12):
            self.h-=12
t=time.asctime()
hh=int(t[11]+t[12])
if(hh>12):
    hh-=12
mm=int(t[14]+t[15])
ss=int(t[17]+t[18])
t1=Time(hh,mm,ss)
print("current system time is",t1)
print("Enter how much time bread needs")
h=int(input("Hours"))
m=int(input("Minute"))
s=int(input("Seconds"))
t2=Time(h,m,s)
t3=Time(0,0,0)
t3.calculate(t1,t2)
print("Bread is ready at",t3)