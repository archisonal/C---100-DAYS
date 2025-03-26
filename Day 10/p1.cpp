/*Problem: You are given a matrix of size 𝑁×𝑀, containing both positive and negative integers. Your task is to compute the sum of elements in each row and return the result as a 1D array.

Input Format

The first line contains two integers, 𝑁 and 𝑀, representing the number of rows and columns of the matrix.
The next 𝑁 lines contain M space-separated integers, representing the elements of the matrix.
Constraints

1≤𝑁,𝑀≤100 (Matrix size can be up to 100×100)
−10^6≤arr[i][j]≤10^6 (Matrix elements can be large positive or negative integers)
Output Format

Print a single line containing 𝑁 space-separated integers, where each integer represents the sum of elements in a row.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m;   //n = number of rows, m = number of cols
    cin>>n>>m;
    long long arr[n][m];  //2-D array i.e., matrix
    long long rowSum[n];
    for(int i=0; i<n; i++){
        rowSum[i]=0;
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            rowSum[i]+=arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        cout<<rowSum[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
