/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43454738
 * Submitted at: 2023-07-10 08:06:46
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ax
 * Result: AC
 * Execution Time: 5 ms
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
#define mint modint1000000007

int main() {
  int n, l;
  cin >> n >> l;
  vector<mint> dp(n+1, 0);
  dp[0] = 1;
  rep(i,n){
    dp[i+1] += dp[i];
    if(i+l<=n) dp[i+l] += dp[i];
  }
  cout<<dp[n].val()<<endl;
}
