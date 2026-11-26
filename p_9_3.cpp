#include<iostream>
using namespace std;
void stack_heap()
{
    // Part A - Stack And Heap Memory
    int local =10;
    cout<<"----------Stack Memory----------\n\n";
    cout<<"Local Variable Value: "<<local<<endl;
    cout<<"Memory Address: "<<&local<<endl;
    cout<<"\n---------Dynamically Allocated Memory---------\n\n";
    int *heap = new int(10);
    cout<<"Allocated Value: "<<*heap<<endl;
    cout<<"Memory Address: "<<&heap<<endl<<endl;
    delete heap;
}
void multi_ref()
{
     // Part B - Multi-level Referencing
     cout<<"\n---------Multi-level Referencing---------\n\n";
     int value = 50;
     int *ptr1 = &value;
     int **ptr2 = &ptr1;
     int ***ptr3 = &ptr2;
     cout<<"Original Value: "<<value<<endl;
     cout<<"Single-level Address: "<<&value<<endl;
     cout<<"Double-level Address: "<<&ptr1<<endl;
     cout<<"Tripal-level Adreaa: "<<&ptr2<<endl;
     cout<<"Value Accessed through three levels: "<<***ptr3<<endl<<endl;
}
void memory_safety()
{
    // Part C - Memory Safety
    cout<<"---------Memory Safety---------\n\n";
    cout<<"Null Reference"<<endl<<endl;
    int *ptr1 = NULL;
    if(ptr1 == NULL)
    {
        cout << "Safe (Reference is NULL)" << endl;
    }
    cout<<"\n---------------------------------------------\n\n";

    cout<<"Invalid Refernce"<<endl<<endl;
    int *ptr2 = new int(10);
    delete[] ptr2;
    cout<<"Memory Released Successfully\n\n";
    cout<<"Reference Invalid\n\n";
    cout<<"\n---------------------------------------------\n\n";

    int *ptr3;
    cout<<"Uninitialised Address Variable\n\n";
    cout<<"Unsafe to Access\n\n";
    cout<<"---------------------------------------------\n\n";
}
int main()
{
    cout<<"********************************************\n";
    cout<<"\tMEMORY ORGANIZATION ANALYZER\n";
    cout<<"********************************************\n\n";
    stack_heap();
    multi_ref();
    memory_safety();
}
