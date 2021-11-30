#include <bits/stdc++.h>
using namespace std;

long long x = -1;
long long f(){
    // static long long x = -1;
    x++;
    long long s = 1;
    for(int i = 0; i < x; i++){
        s *= x;
    }
    return s;
}

int main(){
    int n; cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), f);
    for(int i = 0; i < n + 1; i++){
        cout << v[i] << " ";
    }
}