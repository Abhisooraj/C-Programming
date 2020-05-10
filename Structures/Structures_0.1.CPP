#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
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

book b; // global variable of structure
// upto now no memory is allocated to these variable because book keyword is just declared. Now program is having a "book" data type.

int main()
{
    cout<<"***************************** created by ABHISHEK *****************************"<< endl;
    book b1={101,"CPP by Abhishek", 999.99}; // local variable of structure
    book b2={102,"C by Abhishek", 599.99};

    book b3;
    b3.book_id =103;
    // b3.book_name="Python by Abhishek"
    // Can not write this because book_name is an Array and name of the array represents first block of the array and it's negative and we can'nt assign a negative value to left side of assignment operator.

    strcpy(b3.book_name,"Python by Abhishek");
    // using strcpy function to convert char array to string variable
    b3.book_price= 799.99;

    book b4;
    b4= b2; // Copying all the values of variable b2

    int num;
    cout<<"Do you want to start:-) "<<endl<<"Select your choice: "<<endl<<" 1 for yes :"<<" and "<<" 0 for No: "<<endl;
    cin>>num;
    if (num==1)
        {
            cout<<"created Structures one by one: ";
            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<b1.book_id<<endl;
            cout<<endl<<"Book name : "<<b1.book_name<<endl;
            cout<<endl<<"Book price : "<<b1.book_price<<endl;

            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<b2.book_id<<endl;
            cout<<endl<<"Book name : "<<b2.book_name<<endl;
            cout<<endl<<"Book price : "<<b2.book_price<<endl;

            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<b3.book_id<<endl;
            cout<<endl<<"Book name : "<<b3.book_name<<endl;
            cout<<endl<<"Book price : "<<b3.book_price<<endl;

            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<b4.book_id<<endl;
            cout<<endl<<"Book name : "<<b4.book_name<<endl;
            cout<<endl<<"Book price : "<<b4.book_price<<endl;

            cout<<endl<<"***********************************************************"<<endl;
                //Taking input from user in Structure variable
            book b5;
            cout<<endl<<"Enter Book id (integer value):, Book name( string value):, Book Price (float value):"<<endl;
            cin>>b5.book_id>>b5.book_name>>b5.book_price;
            cout<<endl<<"***********************************************************"<<endl;
            cout<<endl<<"Book id : "<<b5.book_id<<endl;
            cout<<endl<<"Book name : "<<b5.book_name<<endl;
            cout<<endl<<"Book price : "<<b5.book_price<<endl;
            cout<<endl<<"***********************************************************"<<endl;
        }
        else
        {
            cout<<"Termination using exit"<<endl;
            exit(10);
        }
    return 0;
}
