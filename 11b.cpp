//Write a program to concatenate 2 strings using stl string class function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20],s2[10];
    string s3,s4,s5;
    cout<<"Enter 2 strings";
    cin.getline(s1,20);
    cin.getline(s2,10);
    strcat(s1,s2);
    cout<<"\nCharacter string is concetination";
    cout<<s1;
    cout<<"\nEnter 2 strings again";
    cin>>s3>>s4;
    s5=s3+s4;
    cout<<s5;
       return 0;
}