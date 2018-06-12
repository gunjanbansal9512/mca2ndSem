//Friend function and friend classes
#include<iostream>
using namespace std;
class husband;
class wife{
double income;
public:
void getdata(double i)
{
    income=i;
}
friend double total_income(husband,wife);
};
class husband{
double income;
public:
void getdata(double i)
{
    income=i;
}
friend double total_income(husband,wife);
};
double total_income(husband h,wife w)
{
    return h.income+w.income;
}
int main()
{
    husband h;
    wife w;
    h.getdata(40000);
    w.getdata(40000);
    cout<<"\nTotal family income is "<<total_income(h,w);
    return 0;
}