#include<iostream>
using namespace std;

    //Part A – Factorial
    //iterative approach
    int fact=1,n,i;
    int iterative_fact()
    {
        for(i=2;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
    }

    //recursive approach
    int recursive_fact(int a)
    {
        if(a==0 || a==1)
        {
            return 1;
        }
        return a*recursive_fact(a-1);
    }

    //Part B - Fibonacci
    //recursive approach
    int recursive_fibo(int n)
    {
        if(n<=1)
            {
                return n;
            }
        else
            {
            return recursive_fibo(n-1) + recursive_fibo(n-2);
            }
    }
    //iterative approach
    int iterative_fibo(int n)
    {
        int next,a=0,b=1;
        for(i=0;i<n;i++)
        {
            cout<<a<<" ";
            next = a+b;
            a = b;
            b = next;
        }
    }

    int main()
    {
        //Part A
        cout<<"Part A- Factorial"<<endl<<endl;
        cout<<"Enter a number : ";
        cin>>n;
        cout<<"\n Iterative approach"<<endl<<endl;
        cout<<"Factorial of "<<n<<": "<<iterative_fact()<<endl;
        cout<<"\nRecursive approach"<<endl<<endl;
        cout<<"Factorial of "<<n<<": "<<recursive_fact(n)<<endl<<endl;

        // Part B
        cout<<"Part A - Fibonacci Series"<<endl<<endl;
        cout<<"Enter a number : ";
        cin>>n;
        cout<<"\n Recursive approach"<<endl<<endl;
        for (i=0; i<n; i++)
            {
                cout<<recursive_fibo(i)<<" ";
            }
        cout<<"\n Iterative approach"<<endl<<endl;
        iterative_fibo(n);
    }

