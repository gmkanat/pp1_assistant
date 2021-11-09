#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> v;
    int a[200] = {0};
    string t;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    for(int i = 0; i< s.size(); i++){
        if(a[s[i]] == 0){
            t += s[i];
            a[s[i]] = 1;
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << "\n";
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
}
