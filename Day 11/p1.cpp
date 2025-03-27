/*Problem: You need to implement a function that searches for a given target element in an array. If the element is found, return its index; otherwise, return -1.

Input Format

integer n (size of the array).
n array elements.
integer target, which is the element to search for.
Constraints

1 ≤ n ≤ 100
-10^5 ≤ arr[i] ≤ 10^5
-10^5 ≤ target ≤ 10^5
Output Format

Return the index of the target if found, otherwise return -1.*/

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
    int target;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
    
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    
    return 0;
}
