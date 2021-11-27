#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    vector<int> v;    
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    int k = v.back();
    v.pop_back();
    int w = 0;
    int cnt = 0;
    for(int i = 1; i < 101; i++){
        if(i != v[w]){
            cnt++;
        }
        else w++;
        if(cnt == k){
            cout << i << "\n";
            return 0;
        }
    }
}
