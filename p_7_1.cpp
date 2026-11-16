#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char id[10],name[15],branch[20],f_name[10],l_name[10],stu_ref[26],keyword[15];
    int i,j;
    bool found = false;
    cout<<"******************************************\n";
    cout<<"\tSTUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"******************************************\n\n";

    //display student info
    cout<<left<<setw(25)<<"Enter Enrollment Number"<<": ";
    cin.getline(id,10);
    cout<<setw(25)<<"Enter Student Name"<<": ";
    cin.getline(name,15);
    cout<<setw(25)<<"Enter Branch"<<": ";
    cin.getline(branch,20);
    cout<<endl;

    cout<<"---------------------------------------\n\n";
    cout<<"Student Reference\n\n";

    //concatinate student name and id
    for(i=0;name[i]!='\0';i++){
        stu_ref[i] = name[i];
    }

    stu_ref[i] = '-';

    for(j=0;id[j]!='\0';j++,i++){
        stu_ref[i+1] = id[j];
    }

    cout<<stu_ref<<"\n\n";

    cout<<"---------------------------------------\n\n";

    cout<<"First name:\n";

    //to find first name
    for(i=0;name[i]!=' ' && name[i]!='\0';i++){
        f_name[i] = name[i];
    }

    for(j=0;j<i;j++){
    cout<<f_name[j];
    }
    cout<<endl<<endl;

    cout<<"Last name:\n";

    //to find last name
    for(i=0;name[i]!='\0';i++){}

    for(j=i;name[j]!=' ';j--){}

    for(i=0;name[j]!='\0';j++,i++){
        l_name[i] = name[j+1];
    }

    cout<<l_name<<"\n\n";

    cout<<"---------------------------------------\n\n";
    cout<<"Enter Keyword: ";
    cin>>keyword;

    //to find given keyword
    for(i=0;name[i]!='\0';i++){
        if(name[i]==keyword[0]){
            for(j=0;keyword[j]!='\0';j++){
                if(name[i+j]!=keyword[j]){
                    //found = false;
                    break;
                    }
                else{
                    if(keyword[j+1]=='\0'){
                    found = true;
                    i=16;
                    break;
                    }
                }
            }
        }
    }

    cout<<endl<<endl;
    if(found == true){
        cout<<"Keyword Found.\n\n";
    }
    else{
        cout<<"Keyword not found.\n\n";
    }
    cout<<"---------------------------------------\n\n";
    cout<<"Student Report\n\n";
    cout<<left<<setw(20)<<"Enrollment Number"<<": "<<id<<endl;
    cout<<setw(20)<<"Student Name"<<": "<<name<<endl;
    cout<<setw(20)<<"Branch"<<": "<<branch<<endl;


    return 0;
}
