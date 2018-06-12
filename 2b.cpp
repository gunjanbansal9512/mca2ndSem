//Write a cpp program to create a class called comples and implemet following overloading function
#include<iostream>
using namespace std;
class Complex{
int x,y;
public:
Complex (int a,int b)
{
    x=a;
    y=b;
}
Complex ()
{
    x=0;
    y=0;
}
Complex add(int a,Complex s2)
{
Complex c3;
c3.x=a+s2.x;
c3.y=s2.y;
return c3;
}
Complex add (Complex s1,Complex s2)
{
    Complex s3;
    s3.x=s1.x+s2.x;
    s3.y=s1.y+s2.y;
    return s3;
}
void display()
{
cout<<"\n"<<x<<" + "<<y<<" i";
}
};
int main()
{
    Complex c1(5,6),c2(7,8),c3,c4;
    c1.display();
    c2.display();
    c3=c3.add(5,c2);
    c3.display();
    c4=c4.add(c1,c2);
    c4.display();
    return 0;
}