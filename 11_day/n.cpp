#include <bits/stdc++.h>
using namespace std;

void show(vector<int> v){
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
}

bool isPalindrome(vector<int> v){
    int n = v.size();
    for(int i = 0; i < n/2; i++){
        if(v[i] != v[n - i - 1]){
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
    sort(v.begin(), v.end());
    do{
        if(isPalindrome(v)){
            show(v);
            return 0;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << "Impossible\n";
}
