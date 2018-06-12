//Write a program to find the largest,smallest & second largest of three numbers(use inline function maxx and min to find the largest and smallest of 2 numbers).
#include<iostream>
using namespace std;
int MAX(int a,int b)
{
return (a>b)?a:b;

}
int MIN(int a,int b)
{
    return (a<b)?a:b;
}
int main()
{
int a,b,c,lar,larg,sma,smal,sec;
cout<<"Enter 3 numbers";
cin>>a>>b>>c;
lar=MAX(a,b);
larg=MAX(lar,c);
sma=MIN(a,b);
smal=MIN(sma,c);
if(a>smal && a<larg)
sec=a;
else
if(b>smal && b<larg)
sec=b;
else
sec=c;
cout<<"\nLargest number is "<<larg;
cout<<"\nSecong largest number is "<<sec;
cout<<"\nSmallest numnber is "<<smal;

    return 0;
}