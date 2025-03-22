//Probelm Statement: Write a function reverseNumber(int n) that takes an integer n as input and returns its reverse.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 int rev(int n){
     int reversed = 0;
     while(n>0){
         int l_digit = n%10;
         reversed = reversed * 10 + l_digit;
         n /= 10;
     }
     return reversed;
 }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    cout<<rev(n)<<endl;
    
    return 0;
}
