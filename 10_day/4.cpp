// count if

#include <bits/stdc++.h>
using namespace std;

void kvadrat(int &x){ // 
    x = x*x;
}


int main(){
    int n; cin >> n;
    // int x; cin >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for_each(v.begin(), v.end(), kvadrat);

    for(auto &x: v){
        cout << x << " ";
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
