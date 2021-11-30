#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        c[i] = v[i];
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        if(v[i] == c[i]){
            cout << "OK" << endl;
        }
        else {
            cout << c[i] << " == " << v[i] << endl;
        }
    }
}
