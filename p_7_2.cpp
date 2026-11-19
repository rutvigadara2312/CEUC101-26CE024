#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char para[200],first_word[15],last_word[15],p_check[10],reverse_word[10];
    int ch,i,j,k,word=0,alphabets=0,digits=0,spe_ch,space=0;

    cout<<"*********************************************\n";
    cout<<"\tDOCUMENT TEXT ANALYZER\n";
    cout<<"*********************************************\n\n";

    cout<<"Enter Paragraph\n\n";
    cin.getline(para,200);
    cout<<para<<"\n\n";
    cout<<"---------------------------------------------\n";
    cout<<"\t Text Analysis\n";
    cout<<"---------------------------------------------\n\n";

    //for text analysis;

    for(i=0;para[i]!='\0';i++){
        if(para[i]!=' ' && para[i-1]==' '){
            word++;
        }
        if(para[i]>='A' && para[i]<='Z' || para[i]>='a' && para[i]<='z'){
            alphabets++;
        }
        if(para[i]>='0' && para[i]<='9'){
            digits++;
        }
        if(para[i]==' '){
            space++;
        }
    }
    ch = i;
    if(para[0]!=' '){ // if first word is not space word++
        word++;
    }
    spe_ch = ch-space-digits-alphabets;
    cout<<left<<setw(20)<<"Character"<<": "<<ch<<"\n";
    cout<<setw(20)<<"word"<<": "<<word<<"\n";
    cout<<setw(20)<<"Alphabets"<<": "<<alphabets<<"\n";
    cout<<setw(20)<<"Digits"<<": "<<digits<<"\n";
    cout<<setw(20)<<"Special Characters"<<": "<<spe_ch<<"\n";

    cout<<"\n---------------------------------------------\n";
    cout<<"\t String Extraction\n";
    cout<<"---------------------------------------------\n\n";

    cout<<left<<setw(15)<<"First word"<<": ";

    //first word
    if(para[0]==' ')
    i=0;
    {
        for(i=0;para[i]==' ';i++){}
    }
        for(j=i;para[i]!=' ' && para[i]!='\0';i++,j++)
        {
            cout<<para[i];
        }
        cout<<endl;

    //last word
    cout<<"Last word : ";
    for(i=0;para[i]!='\0';i++){}
    i--;
        if(para[i]==' ')
        {
            for(j=i;para[j]==' ';j--,i--){}
        }
    for(j=i;para[j]!=' ';j--,i--){}

    for(j=i+1;para[j]!='\0';j++,i++)
    {
        cout<<para[j];
    }
    cout<<endl;

    //first character
    cout<<"First Character : "<<para[0]<<endl;

    //last character
    for(i=0;para[i]!='\0';i++){}
    cout<<"Last Character : "<<para[i-1];

    //for String Concatenation

    cout<<"\n---------------------------------------------\n";
    cout<<"\t String Concatenation \n";
    cout<<"---------------------------------------------\n\n";

    char new_para[100];
    char whole_para[200];

    cout<<"Enter additional sentence \n\n";
    cin.getline(new_para,200);

    cout<<"\n Updated Paragraph \n\n";

    for(i=0;para[i]!='\0';i++)
    {
        whole_para[i]=para[i];
    }

    for(j=0;new_para[j]!='\0';j++,i++)
    {
        whole_para[i]=new_para[j];
    }
    whole_para[i]='\0';
    cout<<whole_para;

    cout<<"\n---------------------------------------------\n";
    cout<<"\t Pattern Matching\n";
    cout<<"---------------------------------------------\n\n";

    //for keyword
    char keyword[200];
    cout<<"Enter Keyword:";
    cin.getline(keyword,200);
    bool found = false;

    for(i=0;whole_para[i]!='\0' ;i++ && found==false){//used && to break the loop once we found the word
        for(j=0;keyword[j]!='\0';j++){
            if(keyword[j]==whole_para[i+j]){//used i+j to check the first letter of keyword to whole para
                if(keyword[j+1]=='\0'){//used this condition to check every letter of keyword
                found = true;
                k=i;
                break;
                }
            }
            else{break;}//to break the loop if first letter is not same
        }
    }
    if(found==true){
        cout<<"\nKeyword Found"<<endl;
        cout<<"First Occurrence Position: "<<k<<endl;
    }
    else{
        cout<<"\nKeyword Not Found"<<endl;
    }
    cout<<"\n---------------------------------------------\n";
    cout<<"\t String Transformation \n";
    cout<<"---------------------------------------------\n\n";

    cout<<"Uppercase \n\n";

    //here 32 is difference of ascii value of capital and small letter
    for(i=0;whole_para[i]!='\0';i++){
        if(whole_para[i]>='a' && whole_para[i]<='z'){
            cout<<(char)(whole_para[i]-32);
        }
        else{
            cout<<whole_para[i];
        }
    }
    cout<<endl<<endl;
    cout<<"---------------------------------------------\n\n";

    cout<<"Lowercase \n\n";

    for(i=0;whole_para[i]!='\0';i++){
        if(whole_para[i]>='A' && whole_para[i]<='Z'){
            cout<<(char)(whole_para[i]+32);
        }
        else{
            cout<<whole_para[i];
        }
    }
    cout<<endl<<endl;
    cout<<"---------------------------------------------\n\n";

    cout<<"Reverse \n\n";

    for(i=0;whole_para[i]!='\0';i++){}

    for(j=i;j>=0;j--,i--){
        cout<<whole_para[j];
    }
    cout<<endl<<endl;
    cout<<"---------------------------------------------\n\n";

    cout<<"Palindrome Check \n\n";
    cout<<"Enter word: ";
    cin>>p_check;

    for(i=0;p_check[i]!='\0';i++){}
    i--;
    for(j=0;j<=i;j++){ // to copy last letter of P_check to first letter of reverse_word
        reverse_word[j] = p_check[i-j];// i-j is used bcz we have to increase i and decrease j for index
    }
    reverse_word[i]='\0';// to stop when word is finished

    for(i=0;p_check[i]!='\0';i++){
        if(reverse_word[i]!=p_check[i]){
            found = false;
        }
    }
    if(found = true){
        cout<<"\nResult: Palindrome"<<endl;
    }
    else{
        cout<<"\nResult: Not Palindrome"<<endl;
    }
    cout<<"---------------------------------------------\n\n";

    return 0;
}
