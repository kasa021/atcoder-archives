/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/42788949
 * Submitted at: 2023-06-21 13:32:40
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_b
 * Result: AC
 * Execution Time: 44 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<int> dp(n, 1e9);
  dp[0] = 0;
  rep1(i, 1, n) {
    rep1(j, 1, k + 1) {
      if (i - j < 0) break;
      dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
    }
  }
  cout << dp[n - 1] << endl;
}