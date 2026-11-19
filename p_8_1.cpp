#include<iostream>
#include<iomanip>
using namespace std;

//used user defined functions
char id[10], name[20], branch[20], grade[3], result[5];
int i, sem, marks[5], total_marks=0;
float per;

void displayHeader(){
    cout<<"********************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"********************************************\n\n";
}

void acceptStudentDetails(){
    cout<<"--------Student Registration--------\n\n";

    cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
    cin.getline(id, 10);
    cout<<setw(25)<<"Enter Student Name"<<": ";
    cin.getline(name, 20);
    cout<<setw(25)<<"Enter Branch"<<": ";
    cin.getline(branch, 20);
    cout<<setw(25)<<"Enter Semester"<<": ";
    cin>>sem;
    cout<<setw(25)<<"Enter Marks"<<endl;

    //to take marks of all subjects as an input
    for (i=0; i<5; i++){
        cout<<left<<"Subject "<<i+1<<": ";
        cin>>marks[i];
    }
}

void calculateAcademicResult(){
    for (i=0; i<5; i++){
        total_marks = total_marks + marks[i];
    }
    per = total_marks/5.0;
    if (per>=90){
        grade[0] = 'O';
        grade[1] = '\0';
    }
    else if (per>=80){
        grade[0] = 'A';
        grade[1] = '+';
        grade[2] = '\0';
    }
    else if (per>=70){
        grade[0] = 'A';
        grade[1] = '\0';
    }
    else if (per>=60){
        grade[0] = 'B';
        grade[1] = '+';
        grade[2] = '\0';
    }
    else if (per>=50){
        grade[0] = 'B';
        grade[1] = '\0';
    }
    else if (per>=40){
        grade[0] = 'C';
        grade[1] = '\0';
    }
    else {
        grade[0] = 'F';
        grade[1] = '\0';
    }
    cout<<endl<<endl;
}

void displayStudentReport(){
    cout<<"--------------------------------------------\n";
    cout<<"Academic Report\n";
    cout<<"--------------------------------------------\n\n";

    cout<<setw(20)<<"Enrollment Number"<<": "<<id<<endl;
    cout<<setw(20)<<"Student Name"<<": "<<name<<endl;
    cout<<setw(20)<<"Branch"<<": "<<branch<<endl;
    cout<<setw(20)<<"Semester"<<": "<<sem<<endl;
    cout<<setw(20)<<"Total Marks"<<": "<<total_marks<<endl;
    cout<<setw(20)<<"Percentage"<<": "<<per<<"%"<<endl;
    cout<<setw(20)<<"Grade"<<": "<<grade<<endl;

    if (per<40){
        cout<<setw(20)<<"Result"<<": "<<"FAIL\n";
    }
    else {
        cout<<setw(20)<<"Result"<<": "<<"PASS\n";
    }
    cout<<endl<<endl;
}

int main(){
    //called the above user defined functions
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    cout<<"--------------------------------------------\n";
    cout<<"Program executed Successfully Using User-defined Functions\n";
    cout<<"--------------------------------------------\n";
}
