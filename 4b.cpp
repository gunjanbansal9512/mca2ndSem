//Matrix class 
#include<iostream>
using namespace std;
class matrix{
int a[5][5],m,n;
public:
matrix()
{
    m=0;
    n=0;
}
void input()
{
    cout<<"\nEnter the rows and column";
    cin>>m>>n;
    cout<<"\nEnter matrix elements";
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}

bool operator ==(matrix m1)
{
    if(m==m1.m && n==m1.n)
    return true;
    else
    return false;
}
matrix operator +(matrix m2)
{
    int i,j;
    matrix m3;
    m3.n=n;
m3.m=m;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    m3.a[i][j]=a[i][j]+m2.a[i][j];
    return m3;
}
matrix operator -(matrix m2)
{
    int i,j;
    matrix m3;
    m3.n=n;
m3.m=m;
    
    for (i=0;i<m;i++)
    for(j=0;j<n;j++)
    m3.a[i][j]=a[i][j]-m2.a[i][j];
return m3;
}
friend ostream & operator <<(ostream & out,matrix m1);
};
ostream & operator <<(ostream & out,matrix m1)
{
out<<"\nMatrix is";
    for (int i=0;i<m1.m;i++)
    {
        out<<endl;
    for(int j=0;j<m1.n;j++)
    out<<"\t"<<m1.a[i][j];
}
}
int main()
{
 matrix m1,m2,m3,m4;
m1.input();
m2.input();
cout<<"\nFirst matrix is ";
cout<<m1;
cout<<"\nSecond matrix is";
cout<<m2;
if(m1==m2)
{
    m3=m1+m2;
    cout<<"\nMatrix addition is ";
    cout<<m3;
    m4=m1-m2;
    cout<<"\nMatrix Subtraction is";
cout<<m4;
}
else
cout<<"\nOperations are not possible";
    return 0;
}