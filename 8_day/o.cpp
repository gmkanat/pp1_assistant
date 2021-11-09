#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    string s;
    while(n > 0){
        int k = n%x;
        if(k > 9){
            s += k - 10 + 'A';
        }
        else{
            s += k + '0';
        } 
        n /= x;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
}



/* 
A - 10
B - 11
C - 12




*/
