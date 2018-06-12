//STL vector class
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    vector <int>::iterator i;
    int j;
    for(j=1;j<=10;j++)
    v.push_back(j*10);
    for(i=v.begin();i<v.end();i++)
    cout<<endl<<*i;
    cout<<endl<<"Size of vector is "<<v.size();
    return 0;
}