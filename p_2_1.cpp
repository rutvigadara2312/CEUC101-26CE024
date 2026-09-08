#include<iostream>
using namespace std;
int main()
{
    string enrollment_number, name, branch;
    int semester,mobile_number;


    cout<<"*****************************\n"<<endl;
    cout<<" Student Management System   \n"<<endl;
    cout<<"*****************************\n"<<endl;

    //Taking student information as a input;

    cout<<"Enter Enrollment Number:";
    cin>>enrollment_number;
    cin.ignore();
    cout<<"Enter Student Name:";
    getline(cin,name);
    cout<<"Enter branch:";
    cin>>branch;
    cout<<"Enter semester:";
    cin>>semester;
    cout<<"Enter Mobile Number:";
    cin>>mobile_number;

    //Display Student Information;

    cout<<"-----------------------------"<<endl;
    cout<<"     Student Information     "<<endl;
    cout<<"-----------------------------"<<endl;

    cout<<"Enrollment Number:"<<enrollment_number<<endl;
    cout<<"Student Name:"<<name<<endl;
    cout<<"Branch:"<<branch<<endl;
    cout<<"Semester:"<<semester<<endl;
    cout<<"Mobile Number:"<<mobile_number<<endl;

    return 0;



}

