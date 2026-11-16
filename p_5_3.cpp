#include<iostream>
using namespace std;
int main ()
{
    int i,j,n;
    cin>>n;

    //bottom left;

    for(i=0;i<n;i++)
    {
        for(j=1;j<=(i+1);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    //bottom left char;

    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch='a';
        for(j=0;j<(i+1);j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }

    //bottom left upper char;

    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch='A';
        for(j=0;j<(i+1);j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;

    }
    //bottom right;

    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }

    //pyramid;

    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    //char pattern;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        char ch='A';
        for(j=n-1;j>i;j--)
        {
            cout<<"  ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        ch=ch-2;
        for(j=i;j>0;j--)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}
