//inheritance using father son class
#include<iostream>
using namespace std;
class father{
public :
string name,name1,lname,dob,dob1;
float bal;
father ()
{

}
father(string n,string l,string db,int b)
{
    name=n;
    lname=l;
    dob=db;
    bal=b;
}
};
class son:public father{
public:
son ()
{
}
son(string n,string db):father ("xyz","bcd","2-2-1974",100000)
{
    name1=n;
    dob1=db;

}
};
int main()
    {
    son s1("ABC","1-2-2000");
    cout<<"Father's details";
    cout<<endl<<s1.name<<endl<<s1.lname<<endl<<s1.dob<<endl<<s1.bal;
    cout<<"\nSon details"<<endl;
    cout<<s1.name1<<endl<<s1.dob1;
    cout<<"\nSon details derived from father\n";
    cout<<s1.lname<<endl<<s1.bal;
    return 0;
}