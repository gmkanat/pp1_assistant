#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    vector<int> v(s);
    s = 0;
    for(int i = 1; i <= n; i++){
        fill(v.begin() + s, v.begin() + s + i, i);
        s = s + i;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
