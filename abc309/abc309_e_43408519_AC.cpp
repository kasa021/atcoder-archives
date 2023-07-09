/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43408519
 * Submitted at: 2023-07-09 06:04:38
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_e
 * Result: AC
 * Execution Time: 184 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  rep1(i, 1, n) {
    cin >> p[i];
    p[i]--;
  }
  vector<int> dp(n, -1);

  rep(i, m) {
    int x, y;
    cin >> x >> y;
    x--;
    dp[x] = max(dp[x], y);
  }

  rep1(i, 1, n) {
    dp[i] = max(dp[i], dp[p[i]] - 1);
  }

  int ans = 0;
  rep(i, n) {
    if (dp[i] >= 0) ans++;
  }
  cout << ans << endl;
  return 0;
}
