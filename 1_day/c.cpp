#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    a = n%2;
    n = n/2;
    b = n%2;
    n /= 2;
    c = n%2;
    n /= 2;
    d = n%2;
    // cout << a << " " << b << " " << c << " " << d << endl;  
    int s = 0;
    s = a*pow(2, 3) + b*pow(2, 2) + c*pow(2, 1) + d*pow(2, 0);
    cout << s << "\n";
}


// note n = n/2 
// n /= 2;
// binary to decimal convert


// 0 0 1 1
// 