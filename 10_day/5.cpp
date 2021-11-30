// count if

#include <bits/stdc++.h>
using namespace std;

long long kvadrat(){ // 
    static int i = -1;
    i++;
    long long s = 1;
    for(int j = 0; j < i; j++){
        s *= i;
    }
    return s;
}


int main(){
    int n; cin >> n;
    // int x; cin >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    generate(v.begin(), v.end(), kvadrat);

    for(auto &x: v){
        cout << x << " ";
    }
}
    // cout << endl;
    // v.erase(unique(v.begin(), v.end()), v.end()); // выучить
   
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
