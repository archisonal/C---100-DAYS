/*Problem: Valid Triangle 1
Given three integers a, b, and c representing the sides of a triangle, determine whether they form a valid triangle.

Input Format

Three integers a, b, c (1 ≤ a, b, c ≤ 10⁶) representing the lengths of the sides.

Constraints

1≤a,b,c≤10^6
The sides are provided as integers.
The input consists of exactly three integers.
The output is always either 1 (valid triangle) or-1 (invalid triangle).
Output Format

return 1 if the sides form a valid triangle. return -1 if they do not form a valid triangle.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long a, b, c;
    cin>>a>>b>>c;
    
    //a triangle is valid iff it follows the inequality theorem i.e., a+b>c, b+c>a, c+a>b
    if((a+b)>c){
        if((b+c)>a){
            if((c+a)>b){
                cout << 1 << endl;  // Print the valid result
                return 0;
            }
        }
    }
    
    cout << -1 << endl;  // Print -1 if conditions are not met
    return 0;
}
