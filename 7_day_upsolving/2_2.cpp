#include <bits/stdc++.h>
using namespace std;

int n, a, b;

int main() {
    cin >> n >> a >> b;
    int num1 = (a & (1 << n)), num2 = (b & (1 << n));
    a -= num1, a += num2;
    b -= num2, b += num1;
    cout << num1 << " " << num2 << " \n";
    if (a == b) {
        cout << "Nothing has changed";
    } else if (a < b) {
        cout << "Good deal for the second number";
    } else {
        cout << "Good deal for the first number";
    }
}