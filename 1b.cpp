//Define a student class with usn,name,and marks in 3 subjects.Declare an array of 10 student objects.Using appropriate functions,find the average of the marks
#include<iostream>
#include<string.h>
using namespace std;
class student{
int usn,m1,m2,m3;
double avg;
string name;
public:
void input()
{
    cout<<"\nEnter student usn";
    cin>>usn;
    cout<<"\nEnter student name";
    cin>>name;
    cout<<"\nEnter marks of 3 subjects";
    cin>>m1>>m2>>m3;
}
void display()
{
    cout<<"\nStudent usn is "<<usn;
cout<<"\nStudent name is "<<name;
avg=(m1+m2+m3)/3;
cout<<"\nAverage marks are "<<avg;

}
};
int main()
{
student s[3];
int i;
for (i=0;i<3;i++)
    {
        s[i].input();
        s[i].display();
    }
    return 0;
}