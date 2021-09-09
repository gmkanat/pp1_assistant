#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, t;
    cin >> v >> t;
    int s = v*t%109; // v > 0
    s = (s + 109)%109; // v < 0
    cout << s << "\n";
}
// sqrt - root function  <cmath>

// fixed - numeration after .(dot)