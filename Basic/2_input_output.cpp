#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

// <bits.stdc++.h> includes all the libraries but it takes a little more time to execute. doesn't work with vs code

//int - data type. ex :- long (wider range than int)
//int - integer; float - all the decimals; double - wider range than float
//char - a letter, symbol or a number

//every datatype has a range

//cin takes in the data from the keyboard and cout prints it on the screen

int main(){
    int x,y;
    cin>>x>>y;
    string str;
    //cin >> str (do not use this as it takes only the first word from the string)
    getline(cin, str);

    cout<<x<<endl<<y<<endl;
    cout<<str;
return 0;
}

//getline takes only a sentence