/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc059/submissions/43066853
 * Submitted at: 2023-06-30 11:47:46
 * Problem URL: https://atcoder.jp/contests/abc059/tasks/abc059_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  string a, b;
  cin >> a >> b; 
  if(a.size() > b.size()){
    cout << "GREATER" << endl;
  }else if(a.size() < b.size()){
    cout << "LESS" << endl;
  }else{
    rep(i,a.size()){
      if(a[i] > b[i]){
        cout << "GREATER" << endl;
        return 0;
      }else if(a[i] < b[i]){
        cout << "LESS" << endl;
        return 0;
      }
    }
    cout << "EQUAL" << endl;
  }
  return 0;
}