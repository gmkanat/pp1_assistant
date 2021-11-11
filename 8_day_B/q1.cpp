#include <bits/stdc++.h>
using namespace std;

const int N = 100000 + 18;
int a[N]; // if it is global, every value is zero
int n;
int x;
bool ans; // false 

void rec(int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        ans = true;
        return;
    }
    i++;
    rec(i); 
}  

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    rec(0);
    if(ans == true){
        cout << "Yes";
    }
    else cout << "No";
}



// void 