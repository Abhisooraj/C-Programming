/*
 A program  to Create Destructor in CPP

*/

#include<iostream>
using namespace std;

/**
  * @Abhishek does this
  */

class Complex
{
    private:
        int a,b;
    public:

        // Parametrized Constructor
        Complex(int x, int y)
        {
            a=x;b=y;
            cout<<endl<<"Constructor Parametrized "<<endl;
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i"<<endl;
        }

        // Destructor
        ~ Complex()
        {
            cout<<endl<<"Destructor is working"<<endl;
        }
};

void fun()
{
    Complex c1(10,15);
}
int main()
{
    fun();
    Complex c1(25,26);
    return 0;
}
