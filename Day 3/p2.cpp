// Problem Statement-2: 
// Write a C++ program to demonstrate bitwise AND, OR, XOR, and shift operations.
// You are to solve the problem accordingly to the below mentioned testcases

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    //bitwise AND, OR, XOR, and shift operations
    cout<<"Bitwise AND:"<<(a&b)<<endl;
    cout<<"Bitwise OR:"<<(a|b)<<endl;
    cout<<"Bitwise XOR:"<<(a^b)<<endl;
    cout<<"Left shift:"<<(a<<1)<<endl;
    cout<<"Right shift:"<<(a>>1)<<endl;

    return 0;
}