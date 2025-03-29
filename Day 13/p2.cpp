/*Problem: A number is called an Armstrong number if the sum of its digits each raised to the power of the number of digits equals the number itself.

Given an integer N, return True if it is an Armstrong number, otherwise return False.

Input Format

A single positive integer N
Constraints

1≤N≤10^9
Output Format

Return True if N is an Armstrong number.
Return False otherwise.
Sample Input 0

153
Sample Output 0

True
Explanation 0

number of digits in N=3
1^3+5^3+3^3=1+125+27=153=N
Sample Input 1

9474
Sample Output 1

True
Explanation 1

9^4 + 4^4 + 7^4 + 4^4 = 94747=N*/

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int N) {
    long long original = N;
    long long numDigits = 0, sum = 0;

    // Count number of digits
    long long temp = N;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Compute sum of digits raised to the power of numDigits
    temp = N;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int N;
    cin >> N;

    if (isArmstrong(N)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
