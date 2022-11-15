#ifndef _ADMIN_H
#include<iostream>
#include<string>
#include<conio.h>
#include<vector>
#include<utility>
#include "indian.cpp"
#include "chinese.cpp"

using namespace std;
//Login For Admin class

class Admin{
       string user_name;
       char pwd[10];
    public:
       bool flag;
       bool rflag=0;
       int inv_key=0;
       string mob_no;
       string mail;
       string stall_name;

       void login();
       void direct_login();

       void create_acc();
       void recover();
}ad;


//Login for Guest

class Customer : public Admin{
    public:
    string name;
    string mob_no1;
}g;

//Food Stall

class Food_stall{
   private:
    indian i1;
    chinese c1;

    public:
       string stall_name;

       void view_stall();
       void food_stall1();
}fs;


#endif