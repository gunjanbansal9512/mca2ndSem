//Write a program to create human class for constructor overloading
#include<iostream>
using namespace std;
class human{
    int head,leg,hand;

    public:
    human()
    {
        hand=2;
        head=1;
        leg=2;
    }
    human(int a,int b,int c)
    {
        head=a;
        hand=b;
        leg=c;
    }
    human(const human &h1)
    {
        head=h1.head;
        hand=h1.hand;
        leg=h1.leg;
}
human (float a,float b=2 ,float c=2)
{
    head=a;
        hand=b;
        leg=c;
}
void display()
{
    cout<<"\nNo. of heads are "<<head<<"\nNo of hands are "<<hand<<"\nNo of legs are "<<leg; 
}
~human ()
{
    cout<<"\nHuman destroyed";
}
};
int main()
{
    human h1;
    human h2(2,3,3);
    human h3(h1);
    human h4(1);
h1.display();
h2.display();
h3.display();
h4.display();
        return 0;
}
