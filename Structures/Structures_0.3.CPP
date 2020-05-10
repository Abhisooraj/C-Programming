/*
A way to achieve  Encapsulation in structure

A program that can work for various values in a structures;
*/

#include<iostream>
using namespace std;

/**
  * @Abhishek does this
  */

// Global Definition of Structure
struct book
{
    private:
        int book_id;
        char book_name[26];
        float book_price;

    public:
        void input() //member function can directly access member variable
        {
            cout<<endl<<"Enter Book id (integer value):"<<endl;
            cin>>book_id;
            cout<<"Enter Book name( string value):"<<endl;
            cin>>book_name;
            cout<<"Enter Book Price (float value):"<<endl;
            cin>>book_price;
        }
        void display()
        {
            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<book_id<<endl;
            cout<<endl<<"Book name : "<<book_name<<endl;
            cout<<endl<<"Book price : "<<book_price<<endl;
            cout<<endl<<"***********************************************************"<<endl;
        }
};

int main()
{
    cout<<"******************* created by ABHISHEK *******************"<< endl;
    book b1;
    b1.input();
    b1.display();
    return 0;
}
