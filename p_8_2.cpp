#include<iostream>
using namespace std;
int a, b, global=40;

    //PART A - FUNCTION DESIGN
    void print(){
        //function without parameters and without return
        cout<<"This function does not have parameters or return value"<<endl;
    }
    int add(){
        //function without parameters but with return
        int a=10, b=20;
        return a+b;
    }
    void stu_name(string name){
        //function with parameter but without return
        cout<<"Student Name : "<<name<<endl;
    }
    int square(int a){
        //function with parameter and with return
         return a*a;
    }

    //PART B - PARAMETER PASSING
    void change_by_value(int x){
        x = 20;
        cout<<"Value of x : "<<x<<endl;
    }
    void change_by_reference(int &x){
        x = 20;
        cout<<"Value of x : "<<x<<endl;
    }

    //Part C - SCOPE AND VISIBILITY
    void localVariable(){
        int local = 20;
        cout<<"The value of local variable : "<<local<<endl;
        cout<<"The value of global variable : "<<global<<endl;
        }

    //PART D - FUNCTION OVERLOADING
    void stu_detail(char name[], int id){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        }
    void stu_detail(char name[], int id, float per){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Percentage : "<<per<<"%"<<endl;
        }
    void stu_detail(char name[], int id, float per, long long phone){
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Percentage : "<<per<<"%"<<endl;
        cout<<"Contact Number : "<<phone<<endl;
        }

    int main(){

        cout<<"-------------------------------------------"<<endl;
        cout<<"Part A-Function Design "<<endl;
        cout<<"-------------------------------------------"<<endl<<endl;

        print();
        cout<<"Value returned is : "<<add()<<endl;
        stu_name("xyz");
        cout<<"Square of 6 is "<<square(6)<<endl<<endl;

        cout<<"-------------------------------------------"<<endl;
        cout<<"Part B-Parameter Passing "<<endl;
        cout<<"-------------------------------------------"<<endl;

        cout<<"\nCall By Value\n";
        a=10;
        cout<<"\nValue of a before changing : "<<a<<endl;
        change_by_value(a);
        cout<<"Value of a after changing : "<<a<<endl;

        cout<<"\nCall By Reference\n";
        b=10;
        cout<<"\nValue of b before changing : "<<b<<endl;
        change_by_reference(b);
        cout<<"Value of b after changing : "<<b<<endl<<endl;

        cout<<"-------------------------------------------"<<endl;
        cout<<"PART C - SCOPE AND VISIBILITY"<<endl;
        cout<<"-------------------------------------------"<<endl<<endl;

        cout<<"Value of global variable outside function is "<<global<<endl;
        localVariable();
        cout<<endl;

        cout<<"-------------------------------------------"<<endl;
        cout<<"PART D - Function Overloading "<<endl;
        cout<<"-------------------------------------------"<<endl;

        char name[] = "xyz";
        cout<<"\nStudent Details :\n";
        stu_detail(name, 101);
        cout<<"\nStudent Details with Academic Information :\n";
        stu_detail(name, 101, 67.8);
        cout<<"\nStudent Details with Academic and Contact Information :\n";
        stu_detail(name, 101, 67.8,1234567890);

        return 0;
    }
