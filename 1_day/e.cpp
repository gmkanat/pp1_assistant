#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int a, b;
    cin>>n>>m;
    a = n%m;
    b = m%n;
    cout << a*b + 1;
    cout << a << " " << b << "\nl"
}