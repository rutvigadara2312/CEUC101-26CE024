#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int num_participants,i,j,k,temp;
    bool found=false;

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
    char id[num_participants][5],name[num_participants][20],search_id[5],temp_name[num_participants];

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
    }
    // logic for searching participants
        cout<<"Search Participants\n\n";
        cout<<"Enter participant ID: ";
        cin>>search_id;
        cout<<endl;

        for(i=0;i<num_participants;i++){
            for(j=0;j<4;j++){
                if( id[i][j]!= search_id[j]){
                    found=false;
                    j=4;
                }
                else{
                    found=true;
                    if(j==3){
                        j=i;
                        i=num_participants;
                        break;
                    }

                }
            }
        }
        if(found==false){
            cout<<"Participants not found\n\n";
        }
        else{
            cout<<"\n----------------------------------------\n";
            cout<<"Participant Found\n";
            cout<<"------------------------------------------\n\n";

            cout<<left<<setw(6)<<"ID"<<": "<<id[j]<<endl;
            cout<<setw(6)<<"Name"<<": "<<name[j]<<endl;
            cout<<setw(6)<<"Score"<<": "<<score[j]<<endl;
            }
        cout<<"------------------------------------------\n";
        cout<<"Ranking List\n";
        cout<<"------------------------------------------\n\n";

        //logic for ranking participants
        cout<<left<<setw(5)<<"Rank";
        cout<<setw(10)<<"Name";
        cout<<setw(5)<<"Score\n\n";
        cout<<"------------------------------------------\n\n";

        for(i=0;i<num_participants;i++){
            for(j=num_participants-1;j>i;j--){
               if(score[j-1]<score[j]){
                temp=score[j-1];
                score[j-1]=score[j];
                score[j]=temp;
                for(k=0;k<20;k++){
                temp_name[k]=name[j-1][k];
                name[j-1][k]=name[j][k];
                name[j][k]=temp_name[k];
               }
               }
            }
        }
        for(i=0;i<num_participants;i++){
            cout<<left<<setw(5)<<i+1;
            cout<<setw(10)<<score[i]<<" ";
            cout<<setw(5)<<name[i]<<endl;
        }
        cout<<"-----------------------------------------\n\n";

        //logic for finding top performers
        cout<<"Top Performers\n";
        if(num_participants<3){
        for(i=0;i<num_participants;i++){
        cout<<i+1<<". ";
        cout<<name[i]<<" -";
        cout<<score[i]<<endl;
        }

        }
        for(i=0;i<3;i++){
            cout<<i+1<<". ";
            cout<<name[i]<<" -";
            cout<<score[i]<<endl;
        }


    return 0;
}
