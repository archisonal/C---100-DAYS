// Problem Statement-2
// Write a C++ Program to enter the any three words in a space separated manner as input and then display these words in three different lines on output screen. 
// You are to take reference of below testcases and solve accordingly

#include <iostream>
using namespace std;

int main() {
    string word1, word2, word3;
    
    // Taking input for three words
    cout << "Enter three words: ";
    cin >> word1 >> word2 >> word3;

    // Printing each word on a new line
    cout << word1 << endl;
    cout << word2 << endl;
    cout << word3 << endl;

    return 0;
}