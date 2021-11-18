#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    sort(s.begin(), s.end());
    vector<char> v;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i + 1]){
            v.push_back(s[i]);
        }
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
