#include<iostream>
using namespace std;

int sum(int &, int &);
int mul(int &, int &);
int main()
{
    cout<<" Call by Reference "<<endl;
    cout<<"Enter two numbers"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int c= sum(a,b);
    mul(a,b);
    return 0;
}
int sum(int &x, int &y)
{
    cout<<"Sum is:"<<x+y<<endl;
    return 0;
}

int mul(int &x, int &y)
{
    cout<<endl<<"Multiplication is:"<<x*y<<endl;
    return 0;
}
