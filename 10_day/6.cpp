#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    // next_permutation(v.begin(), v.end());
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << " ";
    // }

    sort(v.begin(), v.end());
    // for(int i = 0; i < n; i++){ // 1st variant
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // while(next_permutation(v.begin(), v.end())){
    //     for(int i = 0; i < n; i++){
    //         cout << v[i] << " ";
    //     }
    //     cout << endl; 
    // }

    do{
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl; 
    }while(next_permutation(v.begin(), v.end()));
}

