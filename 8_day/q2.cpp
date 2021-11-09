#include <iostream>

using namespace std;


int f2(int n, int a[]){
  cout << n << "\n";
  if(n == 1)
    return a[0];
  return max(a[n - 1], f2(n - 1,));
}


/*

base case - when n = 1, result a[0];
1) f2([2, 10, -7, 1], 4) => return max(1, f2([2, 10, -7], 3)); => max(1, 10) => 10;
2) f2([2, 10, -7], 3) => return max(-7, f2([2, 10], 2)); => max(-7, 10) => 10;
3) f2([2, 10], 2) => return max(10, f2([2], 1)); => max(10, 2); => 10;
4) f2([2], 1) => return 2;

*/


int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }
  cout << f2(n, a);
  return 0;
}