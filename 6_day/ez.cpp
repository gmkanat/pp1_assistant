#include <bits/stdc++.h>
using namespace std;


string multi(string t, int x){
    string s = "";
    for(int i = 0; i < x; i++){
        s += t;
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string q = multi(s, n);
    cout << q << endl;
}


/* 
if you want to return string the type of function will be string

string example(){
    return k(string);
}


void example(){
    
}
*/