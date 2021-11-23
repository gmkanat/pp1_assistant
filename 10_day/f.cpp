#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    bool ok = 1;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.size() > 0){
                st.pop();
            }
            else{
                ok = 0;
                break;
            }
        }
    }
    if(st.size() > 0 || ok == 0){
        cout << "NO\n";
    }
    else cout << "YES\n";
}
