#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, string> a, pair<string, string> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}
