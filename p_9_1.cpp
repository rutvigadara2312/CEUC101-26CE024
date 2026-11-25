#include<iostream>
using namespace std;
int main()
{
    int a=25, i;
    char ch='A';
    float f=5.11;
    int *p=&a;
    int arr[5]={10, 20, 30, 40, 50}, *arr_ptr;
    arr_ptr = arr;

    cout<<"*************************************\n";
    cout<<"\t MEMORY ADDRESS EXPLORER \n ";
    cout<<"*************************************\n\n";
    cout<<"-------Variable INformation---------\n\n";
    cout<<"Integer Value: "<<a<<endl;
    cout<<"Memory Address: "<<&a<<endl;
    cout<<"-------------------------------------\n\n";
    cout<<"Character Value: "<<ch<<endl;
    cout<<"Memory Address: "<<(void*)&ch<<endl;
    cout<<"-------------------------------------\n\n";
    cout<<"Float Value: "<<f<<endl;
    cout<<"Memory Address: "<<&f<<endl;
    cout<<"-------------------------------------\n\n";

    cout<<"Indirect Referencing\n\n";
    cout<<"Stored Value: "<<*p<<endl;
    *p=30;
    cout<<"Modified Value : "<<p<<endl;
    cout<<"-------------------------------------\n\n";
    cout<<"Sequential Data Collection\n\n";
    cout<<"Array Using Index\n";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array using address-based access\n";
    for(i=0;i<5;i++)
    {
        cout<<*(arr_ptr+i)<<" ";
    }
    cout<<endl;
    cout<<"\n\n----------------------------------------------\n\n";
    cout<<"Observation\n";
    cout<<"Both approaches access the same memory locations.\n\n";
    cout<<"----------------------------------------------\n\n";

}
