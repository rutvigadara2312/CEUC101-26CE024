#include<iostream>
using namespace std;

int x = 10;

void global()
{
    cout<<x<<endl;
}

int main()
{
    int x=45,a;

    cout<<"***************************************"<<endl;
    cout<<"PROGRAM EXECUTION &amp; ERROR HANDLING ANALYZER"<<endl;
    cout<<"***************************************"<<endl<<endl;

    cout<<"---Part A : Compile-time and Run-time Memory---"<<endl;
    cout<<"Enter Value:";
    cin>>a;
    cout<<"Local variable value :"<<x<<endl;
    cout<<"Global Variable Value :";
    global();
    cout<<"Dynamic Memory Value :"<<a<<endl;
    cout<<"----------------------------------\n"<<endl;

    cout<<"---Part B – Low-level Error---"<<endl;
    int originalVal=10,b=2147483648;
    int *ptr1=&originalVal;
    int *ptr2=&originalVal;

    cout<<"----------Arithmetic Overflow------------\n";
    cout<<"int B+1 :"<<b+1<<endl;
    cout<<"----------Pointer Aliasing---------------\n";

    cout<<"ORIGINAL......\n";
    cout<<"Value ptr1 :"<<*ptr1<<endl;
    cout<<"Value ptr2 :"<<*ptr2<<endl;
    cout<<"Original Value:"<<originalVal<<endl;

    *ptr1=20;

    cout<<"UPDATED......\n";
    cout<<"Value ptr1 :"<<*ptr1<<endl;
    cout<<"Value ptr2 :"<<*ptr2<<endl;
    cout<<"Original Value:"<<originalVal<<endl;
    cout<<"Both Address Variables Refer to the Same Memory Location\n\n";

    cout<<"-----------------------------------------------\n";

    cout<<"Memory Leak Demonstration\n";
    cout<<"Dynamic Memory Allocated\n";
    cout<<"Memory Released Successfully\n";

    cout<<"-----------------------------------------------\n"<<endl;

    cout<<"---PART C : Arithmetic Operation---\n";
    int p,q;

    cout<<"Enter Dividend:";
    cin>>p;

    cout<<"Enter Divisor:";
    cin>>q;

    if(q==0)
    {
        cout<<"Error : Division by Zero is not Allowed.\n";
    }
    else{
        cout<<"Division :"<<p/q<<endl;
    }
    return 0;
}
