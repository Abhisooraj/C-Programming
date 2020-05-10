//A program that represents working of Structures with functions

#include<iostream>
using namespace std;

/**
  * @Abhishek does this
  */

// Global Definition of Structure
struct book
{
    int book_id;
    char book_name[26];
    float book_price;
};

void display(book);
book input();

int main()
{
    cout<<"******************* created by ABHISHEK *******************"<< endl;
    book b1;
    b1=input();
    display(b1);
    return 0;
}

book input() // A function that returns structure
{
    book b;
    cout<<endl<<"Enter Book id (integer value):"<<endl;
    cin>>b.book_id;
    cout<<"Enter Book name( string value):"<<endl;
    cin>>b.book_name;
    cout<<"Enter Book Price (float value):"<<endl;
    cin>>b.book_price;
    return b;
}
void display(book b) // A function call by passing structure
{
    cout<<endl<<"***********************************************************"<<endl;
    cout<<endl<<"Book id : "<<b.book_id<<endl;
    cout<<endl<<"Book name : "<<b.book_name<<endl;
    cout<<endl<<"Book price : "<<b.book_price<<endl;
    cout<<endl<<"***********************************************************"<<endl;
}
