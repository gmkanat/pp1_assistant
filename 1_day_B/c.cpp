#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c, d;
    a = n%2; // 1st bit
    n = n/2;
    b = n%2; // 2nd bit
    n = n/2; 
    c = n%2;
    n = n/2;
    d = n%2;

    // binary to decimal 
    int s;
    s = a*8 + b*4 + c*2 + d*1;
    cout << s << endl;
}
