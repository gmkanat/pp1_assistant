#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x == 1 || x == 0){
        return false;
    }
    if(x < 0){
        x = -x;
    }
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << count_if(v.begin(), v.end(), isPrime);
}
