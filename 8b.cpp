//create an abstract base class emoloyee and concept of virtual function call
#include<iostream>
using namespace std;
class Employee{

public:
string name,empid;
float basicsal;
virtual void cal_sal()=0;

};
class manager :public Employee{
float da,hra,net;
public:
manager(string n,string e,float b)
{
name=n;
empid=e;
basicsal=b;
}
void cal_sal()
{
    da=basicsal*0.10;
    hra=basicsal*0.20;
    net=basicsal+da+hra;
    
}
void dispaly()
{
    cout<<"\nManager name is "<<name;
    cout<<"\nEmployee id is "<<empid;
    cout<<"\nNet salary is "<<net;
}
};
class salesman:public Employee
{
float da,hra,ta,net;
public:
salesman(string n,string e,float b)
{
name=n;
empid=e;
basicsal=b;
}
void cal_sal()
{
da=basicsal*0.1;
hra=basicsal*0.2;
ta=basicsal*0.1;
net=da+hra+ta+basicsal;

}
void display()
{
      cout<<"\nSalesman name is "<<name;
    cout<<"\nEmployee id is "<<empid;
    cout<<"\nNet salary is "<<net;
}
} ;
int main()
{
    manager m("Abhinav","icd11",500000);
    salesman s("Naksh","st234w",30000);
    m.cal_sal();
    s.cal_sal();
    m.dispaly();
    s.display();
    return 0;
}