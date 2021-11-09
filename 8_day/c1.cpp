#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N];
int n, x;
bool flag;

void rec(int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        flag = 1;
    }
    rec(++i);
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    rec(0);
    if(!flag){
        cout << "NO\n";
    }
    else cout << "YES\n";
}
