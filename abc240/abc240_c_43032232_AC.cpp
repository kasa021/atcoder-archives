/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/43032232
 * Submitted at: 2023-06-28 15:38:40
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_c
 * Result: AC
 * Execution Time: 12 ms
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
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector<vector<bool>> dp(n + 1, vector<bool>(10001, false));
  dp[0][0] = true;
  rep(i, n) {
    rep(j, x + 1) {
      if (j - a[i] >= 0) dp[i + 1][j] = dp[i+1][j] ||dp[i][j - a[i]];
      if (j - b[i] >= 0) dp[i + 1][j] = dp[i+1][j] ||dp[i][j - b[i]];
    }
  }
  cout << (dp[n][x] ? "Yes" : "No") << endl;
  return 0;
}