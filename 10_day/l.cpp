#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<pair<int,int>, int> a, pair<pair<int,int>, int> b){
    if(a.first.first + a.first.second == b.first.first + b.first.second){
        return a.second < b.second;
    }
    return (a.first.first + a.first.second) < (b.first.first + b.first.second); 
}

int main(){
    int n;
    cin >> n;
    vector<pair<pair<int,int>, int>> v;
    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({{x, y}, i});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto &x: v){
        cout << x.second << " ";
    }
}
