#include<iostream>
using namespace std;
int sum=0;
void print(int n)
{
    if(n==0)//base statement to stop recursion
        return;
    print(n-1);// first it will call itself untill number 1 comes and then it will print again it will call itself until next number it will call itself untill n number comes
    cout<<n<<" ";
}

void reverse(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";// it will print n and then call itself with n-1 number it will keep calling itself untill base condition
    reverse(n-1);
}

void reverse_num(int n)
{
    if(n==0)
        return;
    cout<<n%10;
    sum = sum + (n%10);
    reverse_num(n/10);

}

void binary(int n)
{
    if(n==0)
        return;

    binary(n/2);
    cout<<n%2;
}
    int main()
    {
        int n;
        cout<<"Part A-Recursive Traversal"<<endl<<endl;
        cout<<"Enter a positive integer: ";
        cin>>n;
        cout<<"Number from 1 to N: ";
        print(n);
        cout<<"\nNumber from N to 1: ";
        reverse(n);
        cout<<"\n-------------------------------------\n\n";

        cout<<"\nPart B-Recursive Number Processing "<<endl<<endl;
        cout<<"Enter a positive integer: ";
        cin>>n;
        cout<<"Reversed Number: ";
        reverse_num(n);
        cout<<"\nSum of the numbers: "<<sum<<endl;
        cout<<"-------------------------------------\n\n";

        cout<<"Part C-Recursive Number Conversion"<<endl<<endl;
        cout<<"Enter a decimal number: ";
        cin>>n;
        if(n == 0)
            cout << 0;
        else
            binary(n);
        cout<<\n"-------------------------------------\n\n";


        return 0;
    }
