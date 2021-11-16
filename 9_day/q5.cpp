#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(auto x: v){
        cout << x << " ";
        x += 5;
    }
    // for(int i = 0; i < v.size(); i++){
    //     int q = v[i];
    //     q += 5;
    // }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
