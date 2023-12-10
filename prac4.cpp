#include <fstream>
#include <iostream>
using namespace std;

class employee{
    char name[20];
    int id;
    float salary;
    public:
        void accept(){
            cout<<"Enter the Name:";
            cin>>name;
            cout<<"Enter the id:";
            cin>>id;
            cout<<"Enter the salary:";
            cin>>salary;



        }
        void display(){
            cout<<"The Name is :"<<name;
            cout<<"The id is :"<<id;
            cout<<"The salary is :"<<salary;
        }
    int main(){
        fstream file;
        employee emp[5];

        int num;
        cout<<"Enter the Number of employees:";
        cin>>num;

        file.open("Output.txt",ios::out);


        for (int i=1;i=num;i++){
            emp[i].accept();
            file.write((char*)&emp[i],sizeof(emp[i]));
        }
        file.close();

        file.open("output.txt", ios::in);
        for (int i = i ; i<= num; i++){
            file.read((char*)&emp[i],sizeof(emp[i]));
            emp[i].display();
        }
    }
    file.close();


    return 0 ;
}