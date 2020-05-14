/*
A way to Create Constructors in CPP
A program that can print complex variables

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

        //default constructor
        Complex()
        {

        }

        // Parametrized Constructor
        Complex(int x, int y)
        {
            a=x;b=y;
            cout<<endl<<"Constructor Parametrized "<<endl;
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i"<<endl;
        }

        // Constructor overloading
        Complex(int x)
        {
            a=x;
            cout<<endl<<"Constructor Overloading "<<endl;
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i"<<endl;
        }

        // Copy Constructor

        Complex(Complex &c)
        {
            a= c.a;
            b= c.b;
            cout<<endl<<"Copy Constructor "<<endl;
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i"<<endl;
        }


};

int main()
{
    Complex c1(3,4), c2(5);//,c3=Complex(5,6), c4=6;
    Complex c5(c1); // Copy constructor
    return 0;
}
