/*Problem: You are given a string s consisting of only lowercase English letters. Your task is to count the number of vowels (a, e, i, o, u) present in the string and return the count.

Input Format

A single string s (in lower case, without spaces).
Constraints

1≤∣s∣≤1000 (The length of the string is between 1 and 1000, inclusive).
The string consists only of lowercase English letters (a-z).
Output Format

Return an integer representing the number of vowels in the string. Return 0, if there are no vowels.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int count=0;
    for(char c: s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}
