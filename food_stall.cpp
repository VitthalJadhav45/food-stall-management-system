#include <iostream>
#include <fstream>
#include "login.cpp"

using namespace std;

void Food_stall::view_stall()
{
    cout << "\n\t\tpress 1 to view chinese items ";
    cout << "\n\t\tpress 2 to view indian items ";
    cout << "\n\t\tpress 3 to view all items ";
    cout << "\n\t\tEnter your choice : ";

    int t;
    cin >> t;

    if (t == 1)
    {
        c1.view_item();
    }
    else if (t == 2)
    {
        i1.view_items();
    }
    else if (t == 3)
    {
        cout << "\n\t\t" << stall_name;
        ifstream vout;
        vout.open("stalls.txt");
        while (!vout.eof())
        {
            string sm;
            getline(vout, sm);
            cout << "\n\t\t" << sm;
        }
    }
}

void Food_stall::food_stall1()
{

    ad.login();
    if (ad.rflag == 1)
    {
        cout << "\n\t\tsomething wrong with your crendentials ,please create new account";
        return;
    }

    cout << "\n\n\t\tpress 1 to add your stall ";
    cout << "\n\t\tpress 2 to view your stall ";
    // std::cout << "\n\t\tpress 3 to view your profile";
    cout << "\n\t\tEnter your choice: ";
    int ans;
    cin >> ans;

    if (ans == 1)
    {
        cout << "\n\t\tname of your stall : ";
        cin >> stall_name;
        ofstream out;
        out.open("stalls.txt", std::ios::app);
        cout << "\n\t\tHow many items you are going to add in stall : ";
        cin >> ans;
        for (int i = 0; i < ans; i++)
        {
            string stg;
            int p;
            cout << "\n\t\tEnter the name of item(without white space) : ";
            cin >> stg;
            cout << "\n\t\tEnter the price of added item ";
            cin >> p;
            out << "\n";
            out << stg << "     : " << p << " Rs";
        }
        cout << "\n\t\tItems added succesfully\n";
        out.close();
    }
    else if (ans == 2)
    {
        view_stall();
        cout << "\n";
    }
    /* else if(ans==3)
     {

     }
     */
}