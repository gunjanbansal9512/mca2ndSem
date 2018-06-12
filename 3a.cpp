//Write a cpp program to swap the values of two variables and demonstrates a function using call by references
#include<iostream>
using namespace std;
void swap(int *a ,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
cout<<"\nValue of a,b in swap function "<<"a = "<<*a<<" b= "<<*b;
}
int main()
{
int a,b;
cout<<"Enter a and b";
cin>>a>>b;
cout<<"\nValue of a and b in main before function call "<<a<<endl<<b;
swap(&a,&b);
cout<<"\nValue of a and b in main after function call "<<a<<endl<<b;

    return 0;
}