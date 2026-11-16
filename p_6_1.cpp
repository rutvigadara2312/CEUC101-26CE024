#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num_participants,total_score=0,i,highest_score,lowest_score;
    double average_score;

    cout<<"********************************************\n";
    cout<<"     SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"********************************************\n\n";

    //taking number of participants as input
    m: cout<<"Enter Number Of Participants: ";
    cin>>num_participants;

    if(num_participants<=0){
        cout<<"Number of Participants must be greater than 0.\n\n";
        goto m;
    }

    int score[num_participants];
    char id[num_participants][5],name[num_participants][20];

    //taking participants info as input
    cin.ignore();
    for(i=0;i<num_participants;i++){
        cout<<"Enter Participants ID: ";
        cin.getline(id[i],5);

        cout<<"Enter Participants Name: ";
        cin.getline(name[i],20);

       r: cout<<"Enter Score: ";
        cin>>score[i];
        cin.ignore();
        if(score[i]<0 || score[i]>100){
            cout<<"Invalid score.\n\n";
            goto r;
        }
        total_score=total_score+score[i];

        cout<<endl;
    }
        average_score=(float)total_score/num_participants;


    cout<<"-------------------------------------------------\n";
    cout<<"\n Participants Performance \n";
    cout<<"-------------------------------------------------\n\n";

    cout<<left<<setw(6)<<"ID";
    cout<<setw(10)<<"Name";
    cout<<setw(5)<<"Score";
    cout<<"\n-------------------------------------------------\n\n";

    for(i=0;i<num_participants;i++){
        cout<<left<<setw(6)<<id[i];
        cout<<setw(10)<<name[i];
        cout<<setw(5)<<score[i]<<endl;
    }

    cout<<"\n-------------------------------------------------\n\n";

    cout<<left<<setw(15)<<"Total Score"<<": "<<total_score<<endl;
    cout<<setw(15)<<fixed<<setprecision(2)<<"Average Score"<<": "<<average_score<<endl;

    //logic for highest score
    highest_score=score[0];
    for(i=0;i<num_participants;i++){
        if(highest_score<score[i]){
            highest_score=score[i];
        }
    }
    cout<<left<<setw(15)<<"Highest Score"<<": "<<highest_score<<endl;

    //logic for lowst score
    lowest_score=score[0];
    for(i=0;i<num_participants;i++){
        if(lowest_score>score[i]){
            lowest_score=score[i];
        }
    }
    cout<<left<<setw(15)<<"Lowest Score"<<": "<<lowest_score<<endl;

    return 0;
}
