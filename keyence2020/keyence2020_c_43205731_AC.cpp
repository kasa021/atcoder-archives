/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/keyence2020/submissions/43205731
 * Submitted at: 2023-07-02 16:39:58
 * Problem URL: https://atcoder.jp/contests/keyence2020/tasks/keyence2020_c
 * Result: AC
 * Execution Time: 22 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int n, k, s;
  cin >> n >> k >> s;
  vector<int> ans(n, s);
  if(s==1){
    rep1(i,k,n) ans[i] = 2;
  }else if(s== 1e9){
    rep1(i,k,n) ans[i] = 1;
  }else {
    rep1(i,k,n) ans[i] = s+1;
  }
  rep(i,n) cout << ans[i] << " ";
  cout << endl;
}
