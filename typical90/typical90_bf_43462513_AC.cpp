/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43462513
 * Submitted at: 2023-07-10 13:00:52
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bf
 * Result: AC
 * Execution Time: 58 ms
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
  ll n, k;
  cin >> n >> k;
  // dp[i][j]:= j番目の要素から2^i先の要素
  vector<vector<ll>> dp(70, vector<ll>(100000, 0));
  rep(i, 100000) {
    ll tmp = i, sum = 0;
    while (tmp > 0) {
      sum += tmp % 10;
      tmp /= 10;
    }
    dp[0][i] = (i + sum) % 100000;
  }

  rep(i, 68) {
    rep(j, 100000) {
      dp[i + 1][j] = dp[i][dp[i][j]];
    }
  }
  ll now = n;
  rep(i, 64) {
    if (k & (1ll << i)) {
      now = dp[i][now];
    }
  }
  cout << now << endl;
}
