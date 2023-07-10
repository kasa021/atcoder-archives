/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43464214
 * Submitted at: 2023-07-10 14:00:04
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bq
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
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define mint modint1000000007

int main() {
  ll n, k;
  cin >> n >> k;
  if (n == 1) {
    cout << k << endl;
  }
  else if (n == 2) {
    cout << k * (k - 1) << endl;
  }
  else if (k <= 2) {
    cout << 0 << endl;
  }
  else {
    //dp[i]: (k-2)^(2^i)
    vector<mint> dp(64);
    dp[0] = k - 2;
    rep1(i, 1, 64) {
      dp[i] = dp[i - 1] * dp[i - 1];
    }
    mint ans = k*(k-1);
    rep(i, 64) {
      if ((n - 2) & (1LL << i)) {
        ans *= dp[i];
      }
    }
    cout << ans.val() << endl;
  }
}
