#include <bits/stdc++.h>
using namespace std;

void binary(int x){
    string s;
    while(x > 0){
        s += x%2 + '0';
        x /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), binary);
    // for(int i = 0; i < v.size(); i++){
    //     binary(v[i]);
    // }

}
