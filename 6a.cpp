//Write a cpp program to create a template function for bubble sort and demonstrate sorting of integer and doubles.
#include<iostream>
using namespace std;
template <class Sort>
void bubblesort(Sort a[],int n)
{
int i,j;
Sort temp;
for(i=0;i<n-1;i++)
{
    for (j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}
template <class Sort>
void input(Sort a[],int n)
{
int i;
cout<<"\nEnter array elements";
for(i=0;i<n;i++)
cin>>a[i];
}
template <class Sort>
void display(Sort a[],int n)
{
int i;
for(i=0;i<n;i++)
cout<<endl<<a[i];
}
int main()
{
int a[10],n,m;
double d[10];
cout<<"Enter the size of ineger array";
cin>>n;
input(a,n);
cout<<"\nArray elements are";
display(a,n);
bubblesort(a,n);
cout<<"\nInteger array after sorting";
display(a,n);
cout<<"Enter the size of double array";
cin>>m;
input(d,m);
cout<<"\nArray elements are";
display(d,m);
bubblesort(d,m);
cout<<"\nDouble array after sorting";
display(d,m);

return 0;
}
