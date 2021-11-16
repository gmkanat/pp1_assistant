#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    for(int i = 0; i < s.size(); i++){
        st.insert(s[i]);
    }
    cout << st.size() << endl;
    
    for(auto x: st){
        cout << x << " ";
    }
}
