#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.size() > 0){
                char c = st.top();
                if(c == '(' && s[i] == ')'){
                    st.pop();
                }
                else if(c == '{' && s[i] == '}'){
                    st.pop();
                }
                else if(c == '[' && s[i] == ']'){
                    st.pop();
                }
                else{
                    ok = false;
                    break;
                }
            }
            else{
                ok = false;
                break;
            }
        }
    }
    if(ok == false || st.size() > 0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
