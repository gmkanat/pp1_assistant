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
    cout << s << endl;
    s += " ";
    string t;
    for(int i = 0; i < s.size() ; i++){
        if(s[i] != s[i + 1]){
            t += s[i];
        }
    }
    cout << t.size() << endl;
    for(int i = 0; i < t.size(); i++){
        cout << t[i] << " ";
    }
}
