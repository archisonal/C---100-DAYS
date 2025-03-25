/*Problem: Given an array of integers, count the number of even and odd elements and return the difference between the even count and odd count (Even count - Odd count). The difference can be positive, negative, or zero.

Input Format

An array will be taken as input.

Constraints

1≤n≤105 (Size of the array)
−10^9≤arr[i]≤10^9
Output Format

A single integer, which is the difference between the count of even and odd numbers.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, oddCount=0, evenCount=0;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<evenCount-oddCount<<endl;
    
    return 0;
}