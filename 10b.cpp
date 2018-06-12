#include<iostream>
#include<exception>
#include<stdexcept>
#include<vector>
#include<bitset>
using namespace std;
class Index:public exception
{
int b;
public:
Index()
{
}
Index(int x)
{
b=x;
}
int what()
{
return b;
}
};
class Divide : public exception
{
int a,b;
public:
Divide()
{

}
Divide(int x,int y)
{
a=x;
b=y;
}
int what()
{
return b;
}
};
class Vote: public exception
{
int age;
public:
Vote()
{
}
Vote(int a)
{
age = a;
}
int what()
{

return age;
}
};
int main()
{
//Divide exception
int a,b;
cout<<"Enter two numbers";
cin>>a>>b;
try
{
if(b==0)
throw Divide(a,b);
else
cout<<"\nA/B = "<<a/b;
}
catch(Divide d)
{
cout<<"Divide by "<<d.what();
}

//Index exception
int n,k[5];
cout<<"\nEnter the size of array";
cin>>n;
try{
if(n>5||n<0)
throw Index(n);
else
{
cout<<"enter array elements";
for (int i=0;i<n;i++)
cin>>k[i];
}
}
catch(Index i)
{
cout<<i.what()<<" Is not a valid array size";
}
//vote class exception
int age;
cout<<"\nEnter candidate age";
cin>>age;
try{
if(age<18)
throw   Vote(age);
else
cout<<"\nCandidate is eligible for vote";
}
catch(Vote i)
{
cout<<i.what()<<" is not voting age\n";
}
vector <int> v;
v.push_back(2);
v.push_back(3);
try{
cout<<v.at(2);
}
catch(exception e)
{
cout<<e.what()<<" exception occur\n";
}
try{
bitset <5> mybitset(string("01023"));
}
catch(const invalid_argument &e)
{
cout<<e.what();
}
return 0;
}
