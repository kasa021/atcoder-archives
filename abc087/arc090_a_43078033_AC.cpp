/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/43078033
 * Submitted at: 2023-07-01 04:33:51
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/arc090_a
 * Result: AC
 * Execution Time: 3 ms
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
  int n;
  cin >> n;
  vector<vector<int>> a(2, vector<int>(n));
  rep(i, 2) rep(j, n) cin >> a[i][j];

  // dp[i][j]: (i,j)に到達した時の最大値
  vector<vector<int>> dp(2, vector<int>(n + 1, 0));
  rep(i, n) {
    // 1行目の計算
    dp[0][i + 1] = dp[0][i] + a[0][i];
  }
  rep(i, n) {
    // 2行目の計算
    dp[1][i + 1] = max(dp[0][i + 1], dp[1][i]) + a[1][i];
  }

  cout << dp[1][n] << endl;
  return 0;
}
