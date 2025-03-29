/*Problem: You are given an integer x and an array arr of n integers. Your task is to implement a function that: Increases the value of x by 5. Creates a new array where each element is the sum of the corresponding element in the original array and the modified x. Return the new array without modifying the original array.

Input Format

The first line contains an integer x.
The second line contains an integer n, the size of the array.
The third line contains n space-separated integers representing the original array, arr.
Constraints

1 ≤ n ≤ 100
-10^6 ≤ x, arr[i] ≤ 10^6
Output Format

n space-separated integers representing the transformed array.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Check if input was successful
    if(cin.fail()) {
        return 1;  // Exit if input fails
    }
    
    int modified_x = x + 5;
    vector<int> result(n);
    
    for(int i = 0; i < n; i++) {
        result[i] = arr[i] + modified_x;
    }
    
    // Output with explicit flushing
    for(int i = 0; i < n; i++) {
        cout << result[i];
        if(i < n-1) cout << " ";
    }
    cout << flush;  // Ensure output is flushed
    
    return 0;
}