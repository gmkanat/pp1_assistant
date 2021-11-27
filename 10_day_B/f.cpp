#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.size() > 0){
                st.pop();
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
