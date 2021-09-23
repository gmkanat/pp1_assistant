#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n ;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}


// vector sort(v.begin(), v.end());