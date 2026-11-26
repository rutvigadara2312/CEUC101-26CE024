#include<iostream>
using namespace std;

    //Part B – Hierarchical Composite Data Grouping (Nested Structures)
    struct acadInfo
    {
        int sem;
        float per;
        string grade;
    };

    struct contactInfo
    {
        long long int mob;
        string eid;
    };

    //Part A – Composite Data Modeling (Structure)
    struct stuDetails//Dynamically allocate memory to store student records(Design a Composite Data Type )
    {
        string id;
        string name;
        string branch;
        acadInfo acad;
        contactInfo contact;
    };

    void displayStudent(stuDetails *s)
    {
        cout<<"Address : "<<s<<endl;
        cout<<"Enrollment Number : "<<s->id<<endl;
        cout<<"Name              : "<<s->name<<endl;
        cout<<"Branch            : "<<s->branch<<endl;

        cout<<"-- Academic Information --"<<endl;
        cout<<"Semester          : "<<s->acad.sem<<endl;
        cout<<"Percentage        : "<<s->acad.per<<endl;
        cout<<"Grade             : "<<s->acad.grade<<endl;

        cout<<"-- Contact Information --"<<endl;
        cout<<"Mobile Number     : "<<s->contact.mob<<endl;
        cout<<"Email Id          : "<<s->contact.eid<<endl;
        cout<<"-------------------------------"<<endl<<endl;
    }

    //Update Contact Information
    void updateContact(stuDetails *s)
    {
        cout<<"Enter new Mobile Number : ";
        cin>>s->contact.mob;

        cout<<"Enter new Email Id : ";
        getline(cin,s->contact.eid);

        cout<<"Contact information updated successfully"<<endl<<endl;
    }

    //Display Academic Information
    void displayAcademic(stuDetails *s)
    {
        cout<<"Academic Information of "<<s->name<<endl;
        cout<<"Semester   : "<<s->acad.sem<<endl;
        cout<<"Percentage : "<<s->acad.per<<endl;
        cout<<"Grade      : "<<s->acad.grade<<endl;
        cout<<"-------------------------------"<<endl<<endl;
    }
    int main()
    {
        cout<<"*****************************************"<<endl;
        cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
        cout<<"*****************************************"<<endl;

        int n;

        cout<<"Enter the number of students you want to enter : ";
        cin>>n;
        cin.ignore();

        cout<<"------------------------------------------------"<<endl<<endl;

        cout<<"Part C – Sequential Collection of Composite Data Types (Array of Structures) "<<endl;
        stuDetails *student = new stuDetails[n];

        cout<<"Enter Student details"<<endl<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Student"<<i+1<<endl;

            cout<<"Enrollement Number : ";
            getline(cin,(student+i)->id);

            cout<<"Student Name : ";
            getline(cin,(student+i)->name);

            cout<<"Branch : ";
            getline(cin,(student+i)->branch);

            //Academic Information
            cout<<"Semester : ";
            cin>>(student+i)->acad.sem;

            cout<<"Percentage : ";
            cin>>(student+i)->acad.per;
            cin.ignore();

            cout<<"Grade : ";
            getline(cin,(student+i)->acad.grade);

            //Contact Information
            cout<<"Mobile Number : ";
            cin>>(student+i)->contact.mob;

            cout<<"Email Id : ";
            getline(cin,(student+i)->contact.eid);

            cout<<endl<<"-----------------------------------"<<endl<<endl;
        }

        //Display
        cout<<"Student Records"<<endl<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Address : "<<(student+i)<<endl;
            cout<<"Enrollment Number : "<<(student+i)->id<<endl;
            cout<<"Name              : "<<(student+i)->name<<endl;
            cout<<"Branch            : "<<(student+i)->branch<<endl;

            cout<<"-- Academic Information --"<<endl;
            cout<<"Semester          : "<<(student+i)->acad.sem<<endl;
            cout<<"Percentage        : "<<(student+i)->acad.per<<endl;
            cout<<"Grade             : "<<(student+i)->acad.grade<<endl;

            cout<<"-- Contact Information --"<<endl;
            cout<<"Mobile Number     : "<<(student+i)->contact.mob<<endl;
            cout<<"Email Id          : "<<(student+i)->contact.eid<<endl;
            cout<<"-------------------------------"<<endl<<endl;
        }

        cout<<"Part D – Address-based Data Sharing (Pointer to Structure)"<<endl;
        //Display Student Details
        cout<<"Student Details"<<endl<<endl;
        for(int i=0;i<n;i++)
        {
            displayStudent(student+i);
        }

        //Update Contact Information
        int pos;
        cout<<"Enter student number to update contact (1 to "<<n<<") : ";
        cin>>pos;
        cin.ignore();

        if(pos>=1 && pos<=n)
        {
            updateContact(student+(pos-1));
            cout<<"Updated Details"<<endl;
            displayStudent(student+(pos-1));
        }
        else
        {
            cout<<"Invalid student number"<<endl<<endl;
        }

        //Display Academic Information
        cout<<"Academic Information of all students"<<endl<<endl;
        for(int i=0;i<n;i++)
        {
            displayAcademic(student+i);
        }

        delete[] student;
        student = nullptr;
        return 0;
    }
