/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43262052
 * Submitted at: 2023-07-05 03:20:54
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_i
 * Result: AC
 * Execution Time: 63 ms
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
  int n;
  cin >> n;
  vector<double> p(n);
  rep(i, n) cin >> p[i];
  vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0));
  dp[0][0] = 1;
  rep1(i,1,n+1){
    rep(j,i+1){
      if (j == 0) dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]);
      else dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]) + dp[i - 1][j - 1] * p[i - 1];
    }
  }
  double ans = 0;
  rep1(i,n/2+1,n+1) ans += dp[n][i];
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
