#include<iostream>
#include<iomanip>
using namespace std;

void display(char (*id)[8],char (*name)[20], char (*branch)[20], int *sem, float *per, char (*grade)[3], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Adress"<<": "<<id+i<<endl;
        cout<<left<<setw(10)<<*(id+i)<<setw(10)<<*(name+i)<<setw(10)<<*(branch+i)<<setw(3)<<*(sem+i)<<setw(6)<<*(per+i)<<setw(3)<<*(grade+i);
        cout<<"\n\n--------------------------------------------\n\n";
    }
}
int avg(float total,float *per,int n)
{
    for(int i=0;i<n;i++)
    {
        total += per[i];
    }
    return total/n;
}
int main()
{
    cout<<"****************************************\n";
    cout<<"\t STUDENT RECORD MANAGEMENT SYSTEM \n";
    cout<<"****************************************\n";

    int i,n;
    float highest,lowest, total=0;

    cout<<"Enter Number Of Students : ";
    cin>>n;
    char (*id)[8] = new char[n][8];
    char (*name)[20] = new char[n][20];
    char (*branch)[20] = new char[n][20];
    int *sem = new int[n];
    float *per = new float[n];
    char (*grade)[3] = new char[n][3];

    cout<<"\nDynamic Memory Allocated Successfully\n";
    cout<<"--------------------------------------------\n\n";
    cout<<"Enter Students Details : \n\n";
    for (i=0; i<n; i++)
    {
        cout<<"Student: "<<i+1<<endl<<endl;
        cout<<left<<setw(20)<<"Enrollment Number"<<": ";
        cin.ignore();
        cin.getline(id[i],8);
        cout<<setw(20)<<"Student Name"<<": ";
        cin.getline(name[i],20);
        cout<<setw(20)<<"Enter Branch"<<": ";
        cin.getline(branch[i], 20);
        cout<<setw(20)<<"Enter Semester"<<": ";
        cin>>sem[i];
        cout<<setw(20)<<"Enter Percentage"<<": ";
        cin>>per[i];
        if (per[i] >= 90){
            grade[i][0] = 'O';
            grade[i][1] = '\0';
        }
        else if (per[i] >= 80){
            grade[i][0] = 'A';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (per[i] >= 70){
            grade[i][0] = 'A';
            grade[i][1] = '\0';
        }
        else if (per[i] >= 60){
            grade[i][0] = 'B';
            grade[i][1] = '+';
            grade[i][2] = '\0';
        }
        else if (per[i] >= 50){
            grade[i][0] = 'B';
            grade[i][1] = '\0';
        }
        else if (per[i] >= 40){
            grade[i][0] = 'C';
            grade[i][1] = '\0';
        }
        else{
            grade[i][0] = 'F';
            grade[i][1] = '\0';
        }
        cout<<setw(20)<<"Grade"<<": "<<grade[i]<<endl;
        cout<<"--------------------------------------------\n\n";
    }
    cout<<"Student Records using Address-based Access\n\n";
    display(id, name, branch, sem, per, grade, n);

    cout<<"Academic Summary\n\n";
    cout<<"Class Average Percentage: ";
    cout<<avg(total,per,n);
    cout<<"%\n";
    highest=per[0];
    lowest=per[0];
    for(i=0;i<n;i++)
    {
        if(highest<per[i])
        {
            highest=per[i];
        }
        if(lowest>per[i])
        {
            lowest=per[i];
        }
    }
    cout<<"\nHighest Percentage: "<<highest<<"%"<<endl<<endl;
    cout<<"Lowest Percentage: "<<lowest<<"%"<<endl<<endl;
    cout<<"--------------------------------------------\n\n";
    delete[] id;
    delete[] name;
    delete[] branch;
    delete[] sem;
    delete[] per;
    delete[] grade;
    cout<<"Dynamic Memory Released Successfully\n";

    id = nullptr;
    name = nullptr;
    branch = nullptr;
    sem = nullptr;
    per = nullptr;
    grade = nullptr;

    cout<<"\nAddress Variable Reset Successfully\n";
    cout<<"\n--------------------------------------------\n";
    cout<<"Program Executed Successfully\n";
    cout<<"--------------------------------------------\n\n";

}
