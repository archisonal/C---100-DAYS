// PROBLEM STATEMENT - 1: Write a C++ Program to compare two numbers using relational operators.
// You are to solve the problem accordingly to the below mentioned testcases


#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    //comparing using relational operators
    cout<<"x==y: "<<(x==y)<<endl;
    cout<<"x!=y: "<<(x!=y)<<endl;
    cout<<"x>y: "<<(x>y)<<endl;
    cout<<"x<y: "<<(x<y)<<endl;
    cout<<"x>=y: "<<(x>=y)<<endl;
    cout<<"x<=y: "<<(x<=y)<<endl;
    return 0;
}