/*Problem: An identity matrix is a square matrix of size NxN where all diagonal elements are 1, and all other elements are 0. Write a program to check whether the given matrix is an identity matrix.

Input Format

A single integer N representing the size of matrix.
The next 𝑁 lines contain N space-separated integers, representing the elements of the matrix.
Constraints

1≤N≤100 (Matrix should always square be and at most 100×100)
0≤ arr[i][j] ≤1 (Elements are either 0 or 1)
Output Format

Return “True” if matrix is identity matrix, “False” otherwise.*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    int mat[N][N];
    bool isIdentity = true;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>mat[i][j];
            
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0)){
                isIdentity = false;
            }
        }
    }
    cout<<(isIdentity? "True": "False")<<endl;
        
    return 0;
}
