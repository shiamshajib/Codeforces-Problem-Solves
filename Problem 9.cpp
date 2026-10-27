/*
You are given an expression of the form a+b, where a and b are integers from 0 to 9. You have to evaluate it and print the result.
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        char c;

        cin >> a >> c >> b;

        cout << a + b << endl;
    }

    return 0;
}
