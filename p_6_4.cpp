#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],m_result[3][3]={0},i,j,k,arr_1[5],arr_2[5],merged_arr[10],temp;

    cout<<"*******************************************\n";
    cout<<"\tMATRIX MULTIPLICATION\n";
    cout<<"*******************************************\n\n";

    cout<<"Enter First Matrix:\n\n";

    //to take input of two matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m1[i][j];
        }
    }

    cout<<endl;

    cout<<"Enter second Matrix:\n\n";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>m2[i][j];
        }
    }

    cout<<endl;

    //to display that two matrix
    cout<<"First Metrix\n\n";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Second Matrix\n\n";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"------------------------\n\n";

    //to display resultant matrix
    cout<<"Resultant Matrix\n\n";

    //for multiplication of two matrix
    for(i=0;i<3;i++){
        for(k=0;k<3;k++){
                for(j=0;j<3;j++){
           m_result[i][k] = m_result[i][k] + m1[i][j]*m2[j][k];
                }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<left<<setw(2)<<m_result[i][j]<<" ";
        }
        cout<<endl;
    }

        cout<<"------------------------\n\n";

        cout<<"Part B - Merge Sorted Array\n\n";

        cout<<"********************************************\n";
        cout<<"\tMERGED SORTED ARRAYS\n";
        cout<<"********************************************\n\n";

        cout<<"Enter First array: ";

        for(i=0;i<5;i++){
            cin>>arr_1[i];
        }
        cout<<endl;

        cout<<"Enter second array: ";

        for(i=0;i<5;i++){
            cin>>arr_2[i];
        }

        cout<<endl;

        cout<<"First array\n\n";

        for(i=0;i<5;i++){
            cout<<arr_1[i]<<" ";
        }
        cout<<endl<<endl;

        cout<<"second array\n\n";

        for(i=0;i<5;i++){
            cout<<arr_2[i]<<" ";
        }
        cout<<endl<<endl;

        cout<<"-----------------------------\n\n";


        //copied both arrays in merged_arr
         for(i=0;i<5;i++){
            merged_arr[i]=arr_1[i];
         }
         for(i=0;i<5;i++){
            merged_arr[i+5]=arr_2[i];
         }

        for(i=0;i<10;i++){
            cout<<merged_arr[i]<<" ";
         }

         cout<<endl;

        cout<<"-----------------------------\n\n";

        cout<<"Merged sorted array\n\n";

        //to sort merged array
         for(i=0;i<9;i++){
            for(j=0;j<9-i;j++){
                if(merged_arr[j]>merged_arr[j+1]){
                    temp = merged_arr[j+1];
                    merged_arr[j+1] = merged_arr[j];
                    merged_arr[j] = temp;
                }
            }
         }

         for(i=0;i<10;i++){
            cout<<merged_arr[i]<<" ";
         }
    return 0;
}
