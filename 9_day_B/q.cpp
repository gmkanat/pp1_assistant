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
    sort(v.rbegin(), v.rend());
    // reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}



// comparator
// auto

/* 
    push_back add element
    erase
    sort
    reverse
    
*/