#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string enrollment_number, name, branch;
    int semester,mobile_number;


    cout<<"*****************************\n"<<endl;
    cout<<" Student Record Management System   \n"<<endl;
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

    cout<<left<<setw(20)<<"Enrollment Number"<<":"<<enrollment_number<<endl;
    cout<<left<<setw(20)<<"Student Name"<<":"<<name<<endl;
    cout<<left<<setw(20)<<"Branch"<<":"<<branch<<endl;
    cout<<left<<setw(20)<<"Semester"<<":"<<semester<<endl;
    cout<<left<<setw(20)<<"Mobile Number"<<":"<<mobile_number<<endl;

    return 0;



}


