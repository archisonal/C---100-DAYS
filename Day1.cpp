// Problem Statement-1
// Write a C++ Program to enter the any text and in next line display the same text which is entered by the user using the functions "cin" and "cout". 
// You are to take reference of below testcases and solve accordingly

#include <iostream>
using namespace std;
int main(){
    string data;
    cout<<"Enter the text: ";
    getline(cin, data);
    cout<<data<<endl;
    return 0;
}
