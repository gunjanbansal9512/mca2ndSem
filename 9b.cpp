//File io. Create a file country in the same folder 
#include<iostream>
#include<fstream>
using namespace std;
int length()
{
    ifstream file("country",ios::binary|ios::ate);
    return file.tellg();
    }
int main()
{
    char str[20];
    fstream fout;
    fout.open("country",ios::in|ios::out|ios::trunc);
    cout<<"\nEnter the string";
    cin.getline(str,20);
    fout<<str;
    fout.seekg(0,ios::end);
    cout<<"\nContent of file country is ";
    fout<<str;
    cout<<str;
    cout<<"\nlength of file is "<<length();
    fout.close();
    return 0;
}