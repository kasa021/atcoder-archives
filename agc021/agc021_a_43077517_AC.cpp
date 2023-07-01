/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc021/submissions/43077517
 * Submitted at: 2023-07-01 03:55:41
 * Problem URL: https://atcoder.jp/contests/agc021/tasks/agc021_a
 * Result: AC
 * Execution Time: 6 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  bool ok=true;
  if(n!=1){
    rep1(i,1,n){
      if(s[i] != '9'){
        ok=false;
        break;
      }
    }
  }
  if(ok){
    cout << 9*(n-1) + (s[0]-'0') << endl;
  }
  else{
    cout << 9*(n-1) + (s[0]-'0')-1 << endl;
  }
  return 0;
}
