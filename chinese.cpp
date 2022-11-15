#include "chinese.h"
#include <fstream>
#include<iostream>
#include<string>

using namespace std;

void chinese::view_item(){
    ifstream vou;
    vou.open("chinese.txt");

    while(!vou.eof()){
        string val;
        getline(vou,val);
        cout<<"\n\t\t"<<val;
    }
    vou.close();
}