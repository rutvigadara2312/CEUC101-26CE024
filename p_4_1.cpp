#include<iostream>
#include<iomanip>
using namespace std;
int main()
 {
    string enrollment_number, name, branch;
    int semester,mobile_number,m1, m2, m3;
    float average_marks, total_marks, percentage;


    cout<<"***********************************************\n"<<endl;
    cout<<" Student Record Management System   \n"<<endl;
    cout<<"***********************************************\n"<<endl;

    //Taking student information as an input;

    cout<<"-----------------------------------------------\n"<<endl;
    cout<<" Student Registration   \n"<<endl;
    cout<<"-----------------------------------------------\n"<<endl;


    cout<<left<<setw(25)<<"Enter Enrollment Number"<<":";
    cin>>enrollment_number;
    cin.ignore();
    cout<<left<<setw(25)<<"Enter Student Name"<<":";
    getline(cin,name);
    cout<<left<<setw(25)<<"Enter branch"<<":";
    cin>>branch;
    cout<<left<<setw(25)<<"Enter semester"<<":";
    cin>>semester;
    cout<<left<<setw(25)<<"Enter Mobile Number"<<":";
    cin>>mobile_number;

    cout<<"--------------------------------------------------"<<endl;
    cout<<"     Student Information     "<<endl;
    cout<<"--------------------------------------------------"<<endl;

    cout<<left<<setw(20)<<"Enrollment Number"<<":"<<enrollment_number<<endl;
    cout<<left<<setw(20)<<"Student Name"<<":"<<name<<endl;
    cout<<left<<setw(20)<<"Branch"<<":"<<branch<<endl;
    cout<<left<<setw(20)<<"Semester"<<":"<<semester<<endl;
    cout<<left<<setw(20)<<"Mobile Number"<<":"<<mobile_number<<endl;

    cout<<"--------------------------------------------------\n"<<endl;
    cout<<" Academic Registration   \n"<<endl;
    cout<<"--------------------------------------------------\n"<<endl;

    //taking subject marks as an input;

    cout<<left<<setw(50)<<"Enter Maths Marks"<<":";
    cin>>m1;
    cout<<left<<setw(50)<<"Enter physics Marks"<<":";
    cin>>m2;
    cout<<left<<setw(50)<<"Enter computer programming foundation Marks"<<":";
    cin>>m3;

    //calculating Total marks, Average marks and Percentage;

    total_marks=m1+m2+m3;
    average_marks= (m1+m2+m3)/3;
    percentage= (m1+m2+m3)/3;

    //Display Total marks, Average marks and Percentage;

    cout<<"-----------------------------------------------------\n"<<endl;
    cout<<" Academic Summary   \n"<<endl;
    cout<<"-----------------------------------------------------\n"<<endl;

    cout<<left<<setw(20)<<"Total Marks"<<":"<<total_marks<<endl;
    cout<<left<<setw(20)<<"Average Marks"<<":"<<average_marks<<endl;
    cout<<left<<setw(20)<<"Percentage"<<":"<<percentage<<endl;

    cout<<"-----------------------------------------------------\n"<<endl;
    cout<<" Academic Result  \n"<<endl;
    cout<<"-----------------------------------------------------\n"<<endl;

    if(percentage>40)

        {
            cout<<left<<setw(25)<<"Result"<<":"<<"Pass";
        }
    else
        {
            cout<<left<<setw(25)<<"Result"<<":"<<"Fail";
        }

        cout<<"Congratulations! You have successfully passed.";
    return 0;
 }
