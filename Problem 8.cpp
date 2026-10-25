/*
You are given three integers a,b,and c such that exactly one of these two equations is true:
a+b=c
a−b=c
Output
+ if the first equation is true, and - otherwise.
Input
The first line contains a single integer t the number of test cases.
The description of each test case consists of three integers a,b,c.The additional constraint on the input: it will be generated so that exactly one of the two equations will be true.

Output
For each test case, output either + or - on a new line, representing the correct equation.

*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c) {
            cout << "+" << endl;
        } else {
            cout << "-" << endl;
        }
    }

    return 0;
}
