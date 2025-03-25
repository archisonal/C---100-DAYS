/*Problem: You are given a 1-D integer array of size n. Your task is to compute and return the average of all array elements, ensuring that the result is an integer.

Input Format

n(size of array) An array will be taken as input.

Constraints

*1. 1≤n≤10^5

-10^9 ≤ arr[i] ≤ 10^9*
Output Format

A single integer.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> arr(n);
    
    //taking input for elements
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    long long mean = sum/n;
    cout<<mean<<endl;
    
    return 0;
}
