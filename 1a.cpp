//Write a program to find the sum of varaibles using function with default arguments
#include<iostream>
using namespace std;
int sum(int a=5,int b=10,int c=15);
int main()
{
int a,b,c,s;
s=sum(5,6,7);
cout<<"Sum of variable by passing all three variables "<<s;
s=sum(5,6);
cout<<"\nSum of variable by passing only 2 variables "<<s;
s=sum(5);
cout<<"\nSum of variable by passing only 1 variable "<<s;
s=sum();
cout<<"Sum of varaibles without passing any arguments "<<s<<endl;

    return 0;

}
int sum(int a,int b,int c)
{

    return (a+b+c);
}