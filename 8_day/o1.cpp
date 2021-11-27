#include <bits/stdc++.h>
using namespace std;

string s;
int n, x;

void rec(int k){    
    if(k == 0){
        return;
    }
    int rem = k%x;
    if(rem > 9){
        s += rem - 10 + 'A';
    }
    else{
        s += rem + '0';
    }
    rec(k/x);
}

int main(){ 
    cin >> n >> x;
    rec(n);
    reverse(s.begin(), s.end());
    cout << s << "\n";
}
