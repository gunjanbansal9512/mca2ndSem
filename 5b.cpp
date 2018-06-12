//Define a set class with fucntion overloading
#include<iostream>
using namespace std;
class Set {
int n,a[10];
public:
Set ()
{
    n=0;
}
void input()
{
    cout<<"\nEnter the size of set";
    cin>>n;
    cout<<"\nEnter set elements";
    for (int i=0;i<n;i++)
    cin>>a[i];
}
void display()
{
    int i;
    for (i=0;i<n;i++)
    cout<<endl<<a[i];
}
Set operator + (Set s2)
{
Set s3;
int i,j,k=0,flag=0;
for (i=0;i<n;i++)
{
    s3.a[k++]=a[i];
}
s3.n=k;
for (i=0;i<s2.n;i++)
{
    flag =0;
for(j=0;j<s3.n;j++)
{
    if(s2.a[i]==s3.a[j])
    flag =1;
}
if(flag ==0)
{
s3.a[k++]=s2.a[i];
}
s3.n=k;
}
return s3;
}
Set operator * (Set s2)
{
    Set s3;
    int i,j,k=0,flag=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<s2.n;j++)
        {
            if(a[i]==s2.a[j])
            flag=1;
        }
    if(flag==1)
{
    s3.a[k++]=a[i];
    }
    s3.n=k;
    }
return s3;
}
};
int main()
{
    Set s1,s2,s3,s4;
    cout<<"\nenter 1 set";
    s1.input();
    cout<<"\nEnter 2 set";
    s2.input();
    cout<<"\nYour sets are";
    s1.display();
    s2.display();
    cout<<"\nUnion of two sets are";
    s3=s1+s2;
       s3.display();
s4=s1*s2;
cout<<"\nIntersection of two sets are";
s4.display();
    return 0;
}