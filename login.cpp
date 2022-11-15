#include "recover.cpp"
#include<iostream>
#include<fstream>

using namespace std;

void Admin::login() {
    cout<<"\n\n\t\tContinue to Login"<<endl;
    cout<<"\t\tEnter user name : ";
    string us;
    cin>>us;

    ifstream hin;
    hin.open("user_name.txt");
    string unm;
    hin>>unm;
    hin.close();

    ifstream hout;
    hout.open("created_acc.txt");
    string pass;
    hout>>pass;
    hout.close();

    flag = 0;

    cout<<"\n\t\tEnter your password : ";
    string ps;
    cin>>ps;
    while(us != unm || ps !=pass){
        cout << "\n\t\tInvalid username or password\n";
        cout << "\n\t\tIf you want to recover account press 2  ";
        cout << "\n\t\tPress 1 to try again ";
        cout << "\n\t\tPress 0 to exit ";
        cout << "\n\t\tYour response : ";
        int t;
        cin>>t;

        if(t == 2){
            recover();
            flag=1;
            inv_key= 5;
            break;
        }else if(t == 1){
           cout<<"\t\tEnter user name : ";
           cin>> us;
           cout<<"\n\t\tEnter your password : ";
           cin>>ps;
        }else{
            rflag=1;
            return;
        }
    }

    if(flag==1){
        return;
    }
    
    cout<<" \n\n\t Logged in successfully........\n";
}


void Admin::direct_login(){
    cout<<"\n\n\t\tLogin to continue"<<endl;
    cout<<"\t\t Enter user name : ";
    string us1;
    cin>>us1;
    string ps1;
    flag = 0;
    cout<<"\n\t\tEnter your password : ";
    cin>>ps1;

    ifstream hin,hin1;
    hin.open("user_name.txt");
    string nm,psw;
    hin >> nm;
    hin1.open("created_acc.txt");
    hin1>> psw;

    if(us1 == nm && ps1==psw){
        cout<<"\n\n\t\tLogged in successfully.......\n";
    }else{
        while(us1 != nm || ps1 != psw){

            cout<<"\n\t\tinvalid username or password ";
            cout<<"\n\t\tpress 1 to try again ";
            cout<<"\n\t\tpress 0 to exit ";
            cout<<"\n\t\tyour response : ";
            int t;
            cin>>t;

            if(t == 1){
                cout<<"\t\t Enter user name : ";
                cin>> us1;
                cout<<"\n\t\tEnter your password : ";
                cin>> ps1;

            }else if (t == 0){
                flag = 0;
                inv_key = 5;
                return;
            }
        }

        cout<<"\n\n\t\tlogged in succesfully........ \n";
    }
}