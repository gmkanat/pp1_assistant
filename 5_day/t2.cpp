#include <iostream>
using namespace std;



int main(){
    string s;
    cin >> s;
    string k;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z' ){
            s[i] -= 32;
        }
        k += s[i];

    }
    cout << k;
    

}
/*
    1. find()  return index
    2. bruteforce - перебор
    3. greedy 
*/