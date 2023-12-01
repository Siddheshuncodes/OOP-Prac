/*Title:

Creating a class which uses the concept of inheritance, displays data and
data members and uses the concept of exception handling.
Objectives: To learn the concept of inheritance and exception handling.

Problem Statement:

Imagine a publishing company which does marketing for book and audio
cassette versions. Create a class publication that stores the title (a string) and
price (type float) of publications. From this class derive two classes: book which
adds a page count (type int) and tape which adds a playing time in minutes (type
float). Write a program that instantiates the book and tape class, allows users to
enter data and displays the data members. If an exception is caught, replace all
the data member values with zero values.*/



#include <iostream>
#include <cstring>
#include<exception>
using namespace std;

class publication{
    public:
    string title;
    float price;
    publication() {
        title="No Title";
        price= 0.0;


        
    }
};

class books:public publication{
    int pages;
    public:
    books(){
        title = "no title";
        price = 0.0;
        pages = 0.0;
    }
    void getbook(){
        cout<<"Enter the title: ";
        cin>>title;
        cout<<"Enter the price: ";
        cin>>price;
        cout<<"Enter number of pages : ";
        cin>>pages;
        try{
            if(price>1000){
                if(pages<500){
                    display();
                }
                else{ 
                    throw(pages);
                }
                 
            }
            
        }
        catch(int p){
            title = "0";
            pages = 0;
            price = 0.0;
            cout<<"Your data is invalid";
            display();
            throw;
        }

    }
    void display(){
        cout<<"Title :"<<title;
        cout<<"Price :"<<price;
        cout<<"Pages :"<<pages;

    }
};
class tape:public publication{
    float minutes;
    public:
    tape(){
        minutes = 0.0;
        title = "Null";
        price = 0;
    }
    void gettape(){
        cout<<"Enter the tape name: ";
        cin>>title;
        cout<<"Enter the price: ";
        cin>>price;
        cout<<"Enter the time: ";
        cin>>minutes;
        try{
            if(price>1000){
                if(minutes<500){
                    display();
                }
                else{ 
                    throw(minutes);
                }
                 
            }
            
        }
        catch(float m){
            title = "0";
            minutes = 0;
            price = 0.0;
            cout<<"Your data is invalid";
            display();
            throw;
        }
       
    }
     void display(){
          cout<<"Title :"<<title;
          cout<<"Price :"<<price;
        
         cout<<"minutes :"<<minutes;

        }

};

int main(){
    books b;
    tape t;
    int choice;
    switch(choice){
        case 1 :
        try{
            b.getbook();
        }
        catch(int p){
            cout<<"Exception caught !";

        }break;
        case 2:
        try{
            t.gettape();
        }
        catch(float m){
            cout<<"Exception caught !";
        };

    }

return 0;
};
