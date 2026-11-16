#include<iostream>
#include<iomanip>
using namespace std;
int main()
 {
    string enrollment_number, name,branch;
    int semester,mobile_number,m1, m2, m3,ch;
    float average_marks, total_marks, percentage;
    bool flag_stu=false;


    cout<<"***********************************************\n"<<endl;
    cout<<" Student Record Management System    \n"<<endl;
    cout<<"***********************************************\n"<<endl;

    //Taking student information as an input;

    cout<<"------------------Main menu--------------------\n"<<endl;

    m: cout<<"1.Register New student\n"<<"2.Display Student Record\n"<<"3.Enter Student Marks\n"<<"4.Display Academic Result\n"<<"5.Exit\n";

    cout<<"Enter your Choice:\n";
    cin>>ch;

    switch (ch)
        {
            case 1:
            flag_stu=true;
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


            cout<<"student registered successfully.\n";
            cout<<"----------------------------------------------------------\n";


            goto m;

            case 2:
            if(flag_stu==false)
            {
            cout<<"Register new student first to display.\n";
            goto m;
            }
            else
            {
            cout<<"--------------------------------------------------"<<endl;
            cout<<"   Display Student Record     "<<endl;
            cout<<"--------------------------------------------------"<<endl;

            cout<<left<<setw(20)<<"Enrollment Number"<<":"<<enrollment_number<<endl;
            cout<<left<<setw(20)<<"Student Name"<<":"<<name<<endl;
            cout<<left<<setw(20)<<"Branch"<<":"<<branch<<endl;
            cout<<left<<setw(20)<<"Semester"<<":"<<semester<<endl;
            cout<<left<<setw(20)<<"Mobile Number"<<":"<<mobile_number<<endl;
            cout<<"----------------------------------------------------------\n";


            goto m;
            }


            case 3:

            cout<<"--------------------------------------------------\n"<<endl;
            cout<<" Enter Student marks   \n"<<endl;
            cout<<"--------------------------------------------------\n"<<endl;

            //taking subject marks as an input;

            a: cout<<left<<setw(50)<<"Enter Maths Marks"<<":";
            cin>>m1;
            if(m1<0 || m1>100)
            {
                cout<<"invalid marks\n";
            goto a;
            }
            else
            {flag_stu=true;}

            b:cout<<left<<setw(50)<<"Enter physics Marks"<<":";
            cin>>m2;
            if(m1<0 || m1>100)
               {
                cout<<"invalid marks\n";
            goto b;
               }
            else
            {flag_stu=true;}

            c:cout<<left<<setw(50)<<"Enter computer programming foundation Marks"<<":";
            cin>>m3;
            if(m1<0 || m1>100)
                {cout<<"invalid marks\n";
            goto c;}
            else
            {flag_stu=true;}


            //calculating Total marks, Average marks and Percentage;

            total_marks=m1+m2+m3;
            average_marks=(float)(m1+m2+m3)/3;
            percentage=(float)(m1+m2+m3)/3;


            cout<<"Marks entered successfully.\n";
            cout<<"----------------------------------------------------------\n";



            goto m;


            //Display Total marks, Average marks and Percentage;

            case 4:
            if(flag_stu==false)
            {
            cout<<"\nEnter Students Marks first!\n\n";
            goto m;
            }
            else{
                flag_stu=true;

            cout<<"-----------------------------------------------------\n"<<endl;
            cout<<" Display Academic Result   \n"<<endl;
            cout<<"-----------------------------------------------------\n"<<endl;

            cout<<left<<setw(20)<<"Total Marks"<<":"<<total_marks<<endl;
            cout<<left<<setw(20)<<"Average Marks"<<":"<<average_marks<<endl;
            cout<<left<<setw(20)<<"Percentage"<<":"<<percentage<<endl;

            //used if-else loop to display wether the student is pass or fail;
            if(percentage>40)

                {
                    cout<<left<<setw(25)<<"Result"<<":"<<"Pass"<<endl;
                }
            else
                {
                    cout<<left<<setw(25)<<"Result"<<":"<<"Fail"<<endl;
                }

            //used else-if ladder to display grade and performance;
            if(percentage>89)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"O"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Outstanding"<<endl;

                }
            else if(percentage>79)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"A+"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Ecellent"<<endl;

                }
            else if(percentage>69)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"A"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Very Good"<<endl;


                }
            else if(percentage>59)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"B+"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Good"<<endl;

                }

            else if(percentage>49)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"B"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Satisfactory"<<endl;

                }
            else if(percentage>40)
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"c"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Needs Improvement"<<endl;

                }
            else
                {
                    cout<<left<<setw(25)<<"Grade"<<":"<<"F"<<endl;
                    cout<<left<<setw(25)<<"Performance"<<":"<<"Fails"<<endl;

                }
            cout<<"----------------------------------------------------------\n";

            goto m;
            }
            case 5:
            cout<<"\nThank You...";
            exit(0);
            default:
            cout<<"Invalid Choice\n";
            goto m;
    }


            return 0;

 }
