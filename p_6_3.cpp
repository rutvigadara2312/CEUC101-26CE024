#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    short int num_stu,i,j,ch,position;
    char search_id[1][8],name[100][10],id[100][8],grade[100][3];
    float percentage[100];
    bool found= false;


    cout<<"*******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*******************************************\n";

    //to take info as an input
    cout<<"Enter Number Of Students: ";
    cin>>num_stu;

    cout<<"\nEnter Student Details\n\n";
    cin.ignore();

    //to display info
    for(i=0;i<num_stu;i++){
        cout<<left<<setw(20)<<"Enter Enrollment ID"<<": ";
        cin.getline(id[i],8);
        cout<<setw(20)<<"Enter Student Name"<<": ";
        cin.getline(name[i],10);
        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>percentage[i];

        //used else - if ladder to calculate grade and to store in variable
        if (percentage[i]>=90){
            grade[i][0] = 'O';
            grade[i][1] = '\0';
        }
        else if (percentage[i]>=80){
            grade[i][0] = 'A';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (percentage[i]>=70){
            grade[i][0] = 'A';
            grade[i][1] = '\0';
        }
        else if (percentage[i]>=60){
            grade[i][0] = 'B';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (percentage[i]>=50){
            grade[i][0] = 'B';
            grade[i][1] = '\0';
        }
        else if (percentage[i]>=40){
            grade[i][0] = 'C';
            grade[i][1] = '\0';
        }
        else {
            grade[i][0] = 'F';
            grade[i][1] = '\0';
        }

        cout<<endl;
        cin.ignore();
        }

        cout<<"----------------------------------------\n";
        cout<<"Current Student Records\n\n";

        for(i=0;i<num_stu;i++){

        cout<<left<<setw(8)<<id[i]<<setw(10)<<name[i]<<setw(5)<<percentage[i]<<setw(4)<<grade[i]<<endl<<endl;
        }

        cout<<"------------------------------------------\n\n\n";

        M: cout<<"1. Insert New Student\n2. Update Student Details\n3. Delete Student Record\n4. Exit\n\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        cout<<endl;


        switch (ch)
        {
        case 1:

            //to insert new student
            num_stu++;
            cout<<"Enter Position: ";
            cin>>position;

            for(i=num_stu-1;i>=position;i--){
                    for(j=0;j<8;j++){
                    id[i][j]=id[i-1][j];
                    }
                    for(j=0;j<10;j++){
                    name[i][j]=name[i-1][j];
                    }
                    percentage[i]=percentage[i-1];
                    for(j=0;j<3;j++){
                    grade[i][j]=grade[i-1][j];
                    }
        }
            cout<<endl;

            cin.ignore();
            cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
            cin.getline(id[position-1],8);
            cout<<setw(25)<<"Enter Student Name"<<": ";
            cin.getline(name[position-1],10);
            cout<<setw(25)<<"Enter Percentage"<<": ";
            cin>>percentage[position-1];
            cin.ignore();
            if (percentage[position-1]>=90){
                grade[position-1][0] = 'O';
                grade[position-1][1] = '\0';
            }
            else if (percentage[position-1]>=80){
                grade[position-1][0] = 'A';
                grade[position-1][1] = '+';
                grade[position-1][2] = '\0';
            }
            else if (percentage[position-1]>=70){
                grade[position-1][0] = 'A';
                grade[position-1][1] = '\0';
            }
            else if (percentage[position-1]>=60){
                grade[position-1][0] = 'B';
                grade[position-1][1] = '+';
                grade[position-1][2] = '\0';
            }
            else if (percentage[position-1]>=50){
                grade[position-1][0] = 'B';
                grade[position-1][1] = '\0';
            }
            else if (percentage[position-1]>=40){
                grade[position-1][0] = 'C';
                grade[position-1][1] = '\0';
            }
            else {
                grade[position-1][0] = 'F';
                grade[position-1][1] = '\0';
            }

            for(i=0;i<num_stu;i++){
                   cout<<id[i]<<" ";
            }
            cout<<endl;

            cout<<"Record Inserted Successfully.\n\n";
            cout<<"-----------------------------------------\n";
            cout<<"Updated Student Records\n\n";

            for(i=0;i<num_stu;i++){

            //updated student record
            cout<<left<<setw(8)<<id[i]<<setw(10)<<name[i]<<setw(5)<<percentage[i]<<setw(4)<<grade[i]<<endl;
            }
            cout<<endl;

            cout<<"------------------------------------------\n\n\n";
            goto M;

            case 2:

            //to update student detail
            R: cout<<"Enter Enrollment Number: ";
            cin.ignore();
            cin.getline(search_id[0],8);

            //to search id of student for updatation
            for(i=0;i<num_stu;i++){
                for(j=0;j<7;j++){
                    if(id[i][j]!=search_id[0][j]){
                        break;
                        }
                        else{
                             if(j==6){
                                j=i;
                                i=num_stu;
                                found=true;
                                break;
                             }
                        }

                }
            }
            if(found==false){
                cout<<"\nID Not Found.\n";
                goto R;
            }

            else{
                cout<<"Enter New Percentage: ";
                cin>>percentage[j];
                if (percentage[j]>=90){
                    grade[j][0] = 'O';
                    grade[j][1] = '\0';
                }
                else if (percentage[position-1]>=80){
                    grade[j][0] = 'A';
                    grade[j][1] = '+';
                    grade[j][2] = '\0';
                }
                else if (percentage[position-1]>=70){
                    grade[j][0] = 'A';
                    grade[j][1] = '\0';
                }
                else if (percentage[j]>=60){
                    grade[j][0] = 'B';
                    grade[j][1] = '+';
                    grade[j][2] = '\0';
                }
                else if (percentage[j]>=50){
                    grade[j][0] = 'B';
                    grade[j][1] = '\0';
                }
                else if (percentage[j]>=40){
                    grade[j][0] = 'C';
                    grade[j][1] = '\0';
                }
                else {
                    grade[j][0] = 'F';
                    grade[j][1] = '\0';
                }
            }
            cout<<endl;
            cout<<"Record Updated Successfully.\n\n";
            cout<<"--------------------------------------\n";
            cout<<"Updated Student Records\n\n";

            for(i=0;i<num_stu;i++){

            cout<<left<<setw(8)<<id[i]<<setw(10)<<name[i]<<setw(5)<<percentage[i]<<setw(4)<<grade[i]<<endl;
            }
            cout<<endl;
            cout<<"--------------------------------------\n\n\n";

            goto M;

        case 3:

            //to delete student info
            cout<<"Enter Position:";
            cin>>position;

            for(i=position-1;i<num_stu-1;i++){
                for(j=0;j<8;j++){
                    id[i][j]=id[i+1][j];
                }
                for(j=0;j<10;j++){
                    name[i][j]=name[i+1][j];
                }
                percentage[i]=percentage[i+1];
                for(j=0;j<3;j++){
                    grade[i][j]=grade[i+1][j];
                }
            }

            num_stu--;
            cout<<endl;
            cout<<"Record Deleted Successfully.\n\n";
            cout<<"-------------------------------------\n";
            cout<<"Updated Student Records\n\n";

            for(i=0;i<num_stu;i++){

            cout<<left<<setw(8)<<id[i]<<setw(10)<<name[i]<<setw(5)<<percentage[i]<<setw(4)<<grade[i]<<endl;
            }
            cout<<endl;
            cout<<"--------------------------------------\n\n\n";

            goto M;

        case 4:
            cout<<"Thank you...";
            return 0;
            }
}
