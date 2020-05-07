/*
 * Sample inline function example code
 */

#include<iostream>
using namespace std;

/**
  * @Abhishek does this
  */


/**
TO Eliminate the cost of small functions, CPP suggest us to use Inline function. When a function declared as inlne function, it will expand when it'll invoked.
At that time (invoked time) compiler replaces the function call with its code.
The Keyword for inline functions is "inline". Inline is a request hence it can be inline or it can not be. It depends on the compiler.
Functions which are including "for, switch, goto, recursion, static variables" can not be created inline by compiler. Inline function should be short.

**/
inline int square(int); // it will return square of the number.
int main()
{
    cout<<"** Sample program of Inline function **"<<endl<<endl<<"Enter a number:"<<endl;
    int a;
    cin>>a;
    cout<<"Square is:"<<square(a)<<endl; //actual arguments
    return 0;
}
int square(int x) // formal arguments
{
    return x*x;
}

