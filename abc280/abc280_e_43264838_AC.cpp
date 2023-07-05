/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/43264838
 * Submitted at: 2023-07-05 05:40:52
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_e
 * Result: AC
 * Execution Time: 55 ms
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
#define mint modint998244353

int main() {
  int n, p;
  cin >> n >> p;
  vector<mint> dp(n + 1, 0);
  dp[0] = 0;
  dp[1] = 1;

  rep1(i, 2, n + 1) {
    dp[i] = 1 + dp[i - 1] * (100 - p) / 100 + dp[i - 2] * p / 100;
  }

  cout << dp[n].val() << endl;
  return 0;
}
