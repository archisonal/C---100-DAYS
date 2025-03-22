//PROBLEM: Digit Sum Function
//Write a function digitSum(int n) that takes an integer n as input and returns the sum of its digits.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<digitSum(n)<<endl;
    
    return 0;
}
