#include "create.cpp"
#include<iostream>

using namespace std;

void Admin::recover(){
    cout<<"\n\t\tEnter your mobile number : ";
    string m_no;
    cin>>m_no;

    if(m_no == mob_no){
        cout<<"\t\tUser_name : "<<user_name<<endl;
        cout<<"\t\tPassword : "<<pwd<<endl;
    }else{
        cout<<"\n\t\tInvalid number";
        rflag=1;
        flag=1;
        inv_key=5;
        return;
    }
}