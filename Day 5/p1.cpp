// Problem 1: Find the Nth Fibonacci Number Using a While Loop

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n <= 0) {
        cout<<"Invalid input."<< endl;
        return 1;
    }
    if(n==1 || n==2){
        cout<<1<<endl;
        return 0;
    }
    int a = 0, b = 1, fib = 0, count = 1;
    
    while(count<n){
        fib = a+b;
        a = b;
        b = fib;
        count++;
    }
    cout<<fib<<endl;
    
    return 0;
}