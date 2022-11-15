#include "indian.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void indian::view_items(){
    ifstream out;
    out.open("indian.txt");

    while(!out.eof()){
        string out1;
        getline(out,out1);
        cout<<"\n\t\t"<<out1;
    }
    out.close();
}