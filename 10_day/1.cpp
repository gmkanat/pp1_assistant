// count if

#include <bits/stdc++.h>
using namespace std;

bool isOdd(int x){
    return (x%3 == 0);
}

bool isPrime(int x){
    if(x == 1){
        return false;
    }
    for(int i = 2; i < x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n; cin >> n;
    // int x; cin >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << count_if(v.begin(), v.end(), isPrime);
    // rotate(v.begin(), v.begin() + 3, v.end());

    // for(auto &x: v){
    //     cout << x << " ";
    // }
    // cout << endl;
    // fill(v.begin(), v.end(), 3);
    // v.erase(unique(v.begin(), v.end()), v.end()); // выучить
    // for_each(v.begin(), v.end(), [](int &i){
    //     i = i*i;
    //     return i;
    // });

    // generate(v.begin(), v.end(), [](){
    //     static int i = 9;
    //     i++;
    //     return i*i;
    // });

    // do {
    //     for(auto x: v){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }while(next_permutation(v.begin(), v.end()));
    // while(next_permutation(v.begin(), v.end())){
    //     for(auto x: v){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }   
}
