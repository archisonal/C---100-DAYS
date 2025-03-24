/*Problem: Pattern Printing
Given an integer n, print a right-angled triangle using *. The triangle should have n rows, with the first row containing one *, the second row containing two *, and so on.

*
* *
* * * 
* * * *
* * * * *

Input Format

A single integer n (1 ≤ n ≤ 20) representing the number of rows in the triangle.

Constraints

1 ≤ n ≤ 20
There are no spaces between the * in each row.
No trailing spaces at the end of each row.
Output Format

A right-angled triangle pattern of asterisks, where each row contains an increasing number of **/

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
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
