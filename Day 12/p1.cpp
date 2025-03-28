/*Problem: You are given a string s consisting of only uppercase and lowercase English letters. Your task is to reverse the string and return the reversed version of string.
Input Format

A single string s (without spaces).
Constraints

1. 1 ≤ |s| ≤ 1000 (length of string)
2. The string consists of only lowercase and uppercase English letters(a-z),(A-Z).
Output Format

Return the reversed string.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    
    return 0;
}