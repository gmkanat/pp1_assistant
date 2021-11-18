#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // pair<int, int> p = {3, 2};
    // cout << p.first << " " << p.second << endl;
    // 1st method

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    // 2nd method

    // vector<pair<int,int>> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i].first >> v[i].second;
    // }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

// make_pair
// sort by second