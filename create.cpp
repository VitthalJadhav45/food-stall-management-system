#include "admin.h"
#include<fstream>
#include<iostream>

void Admin::create_acc(){
    ofstream hout;
    hout.open("user_name.txt");
    cout<<"\n\t\tEnter your mobile number : ";
    cin>>mob_no;
    cout<<"\n\t\tEnter user name :";
    cin>>user_name;
    hout<<user_name;
    cout<<"\n\t\tEnter password you want to set(must be 10 charactered ): ";
    hout.close();
    ofstream sout;
    sout.open("created_acc.txt");

    for(int i=0;i<=9;i++){
        pwd[i]=getch();
        sout<<pwd[i];
        cout<<"$";
    }

    sout.close();
    cout<<endl;
}