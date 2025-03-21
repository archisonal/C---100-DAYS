// Problem 2: Prime Number Checker Using a For Loop

#include <iostream>
using namespace std;

string isPrime(int n){
    if(n<=1) return "Not Prime";
    if(n<=3) return "Prime";
    if(n%2==0 || n%3==0) return "Not Prime";
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0) return "Not Prime";
    }
    return "Prime";
}

int main(){
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    
    return 0;
}