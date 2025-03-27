/*Problem: Given an array of n integers, sort the array in ascending order using a comparison-based approach where adjacent elements are swapped if they are in the wrong order.

Input Format

A single integer n(size of array).
n array elements.
Constraints

1 ≤ n ≤ 1000
-10^6 ≤ arr[i] ≤ 10^6
Output Format

Return the sorted array as a new array of integers.*/

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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++) {  // Number of passes
        for (int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // Swap if in wrong order
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
