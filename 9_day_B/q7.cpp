#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(auto &x: v){
        cout << x << " ";
    }
    // for(int i = 0; i < v.size(); i++){
    //     int q = v[i];
    //     cout << q << " ";
    // }
}
