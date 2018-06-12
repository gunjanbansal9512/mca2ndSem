//friend class
#include<iostream>
using namespace std;
class avg;
class student{
string name;
int m1,m2,m3;
public:
void getdata(string n,int a,int b,int c)
{
    name=n;
    m1=a;
    m2=b;
    m3=c;
}
void display()
{
    cout<<"\nStudent name is "<<name;
}
friend class avg;

};
class avg{
int avg;
public:
void marks_avg(student s)
{
    avg=(s.m1+s.m2+s.m3)/3;
    s.display();
    cout<<"\nAverage marks are "<<avg;
}
};
int main()
{
    student s;
    avg a;
    s.getdata("Gunjan",27,27,28);
    a.marks_avg(s);
    
    return 0;
}