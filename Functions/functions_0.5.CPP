/**
  * @Abhishek does this
  * Function overloading "A way of Compile time-polymorphism"
  */
// Function Overloading

#include<iostream>
//Header file for including cout and cin
using namespace std;

int area(int, int);
float area(float);
int main()
{
    cout<<"** Calculate the Area for Circle and Rectangle **"<<endl;

    // For Rectangle
    int l,b;
    cout<<endl<<"Enter length and breadth:"<<endl;
    cin>>l>>b;
    cout<<"Area of Rectangle is:"<<area(l,b)<<endl;

    // For Circle
    float r;
    cout<<endl<<"Enter the radius:"<<endl;
    cin>>r;
    cout<<"Area of Circle is:"<<area(r)<<endl;

    return 0;
}
int area(int x, int y)
{
    return (x*y);
}
float area(float x)
{
    return (3.14*x*x);
}
