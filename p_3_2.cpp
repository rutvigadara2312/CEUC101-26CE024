#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int cpf_marks=70,maths_marks=80,result;

    cout<<++cpf_marks<<endl;
    cout<<cpf_marks++<<endl;
    cout<<--cpf_marks<<endl;
    cout<<cpf_marks--<<endl;

    result=++cpf_marks + cpf_marks++ + --maths_marks + ++maths_marks - maths_marks--;

    cout<<result;
}
