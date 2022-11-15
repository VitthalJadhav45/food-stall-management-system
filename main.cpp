#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include "food_stall.cpp"

using namespace std;

int main()
{
    int choice;
    cout << "\n\n\n\t\tWelcome to Food Court Management system  ";
    cout << "\n\n\n\t\tPlease press enter to continue ";
    getch();

    while (choice != 0)
    {
        cout << "\n\n\t\t**************************************************";
        cout << "\n\n\t\tPress 1 for Admin portal ";
        cout << "\n\t\tPress 2 for Food stall portal ";
        cout << "\n\t\tPress 3 for Customer portal ";
        cout << "\n\t\tpress 0 to exit ";
        cout << "\n\n\t\tEnter your choice : ";

        cin >> choice;

        cout << "\n\n\t\t****************************************************";

        // CREATE LOGIC FOR ENTERED CHOICE

        if (choice == 1)
        {
            cout << "\n\n\tWELCOME TO ADMIN PORTAL ";
            cout << "\n\n\t\tPress 1 to create acoount ";
            cout << "\n\t\tpress 2 if you already have an account ";
            cout << "\n\t\tPress 0 to exit ";
            cout << "\n\t\tEnter your choice : ";
            int t;
            cin >> t;

            if (t == 1)
            {
                ad.create_acc();
                if (ad.flag == 0 && ad.inv_key == 5)
                {
                    cout << "\t\t Invalid credentials, please create account again" << endl;
                    break;
                }
                fs.food_stall1();
            }
            else if (t == 2)
            {
                fs.food_stall1();
            }
            else if (t == 0)
            {
                cout << "\n\t\tThank you for visiting our portal!!!!!!!!!! ";
                break;
            }
        }
        else if (choice == 2)
        
        {
            cout << "\n\t\tWELCOME TO FOOD STALL PORTAL " << endl;
            fs.food_stall1();
            if (ad.rflag == 1)
            {
                return 0;
            }
        }
        else if (choice == 3)
        {
            cout << "\n\n\t\tWELCOME TO CUSTOMER PORTAL ";
            cout << "\n\t\tEnter your mobile number to continue : ";

            cin >> g.mob_no1;
            cout << "\n\t\tEnter your name : ";
            cin >> g.name;
            cout << "\n\n\t\tPress 1 to view menu ";
            cout << "\n\t\tPress 0 to exit ";
            cout << "\n\t\tEnter your choice : ";

            int num;
            
            cin>>num;

            if(num == 1){
                fs.view_stall();
            }else{
                cout<< "\n\t\tThank you for visiting our portal!!!!!!!!!!";
                break;
            }
        }
    }
}