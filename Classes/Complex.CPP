/*
A way to define class in CPP
A Class is similar as structure with single difference "In class by default all members are private where in structure all the members are public".
Classes
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
        int input(int x, int y)
        {
            a=x;b=y;
        }
        void helloworld();
        void display()
        {
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i";
        }
};
// Accessing methods of the class
void Complex::helloworld()
{
    cout<<endl<<"Hello World!"<<endl;
}
int main()
{
    Complex c1;
    c1.input(2,3);
    c1.display();
    c1.helloworld();
    return 0;
}
