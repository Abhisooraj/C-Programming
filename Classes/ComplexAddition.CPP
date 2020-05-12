/*
A way to Complex numbers:
(4+5i)+ (6+2i)= 10+7i
A program that can print addition of complex variables
*/

#include<iostream>
using namespace std;

/**
  * @Abhishek does this
  */

class ComplexAddition
{
    private:
        int a,b;
    public:
        int set_data(int x, int y)
        {
            a=x;b=y;
        }
        void show_data()
        {
            cout<<"Complex Number is:"<<a<<"+"<<b<<"i";
        }

        //here add function will perform the operation

        ComplexAddition add(ComplexAddition c) // return type will be the class name for it
        {
            ComplexAddition temp;
            temp.a= a+c.a;
            temp.b= b+c.b;
            return temp;
        }
};
// Accessing methods of the class
int main()
{
    ComplexAddition c1,c2,c3;
    c1.set_data(2,3);// obj1
    c2.set_data(3,5);// obj 2
    c3=c1.add(c2); // Here object 1 is calling add function by pass second object as an argument
    c3.show_data();
    return 0;
}
