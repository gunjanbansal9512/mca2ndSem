//Write a program to calculate the volume of different geometric shapes like cube,cylinder and sphare and hence implement the concept of function overloading.
#include<iostream>
#define pi 3.1415
using namespace std;
void volume(double r)
{
    cout<<"\nVolume of sphere is "<<(4/3)*pi*r*r*r;   
}
void volume(int a)
{
    cout<<"\nVolume of cube is "<<a*a*a;
}
void volume(double r,double h)
{
    cout<<"\nVolume of cylinder is "<<pi*r*r*h;
}
int main()
{
    double r,rc,h;
    int a;
    cout<<"Enter radius of sphere";
    cin>>r;
    volume(r);
    cout<<"\nEnter radius and height of cylinder";
    cin>>rc>>h;
    volume(rc,h);
    cout<<"\nEnter side of a cube";
    cin>>a;
    volume(a);
    return 0;
}