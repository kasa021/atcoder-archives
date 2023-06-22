/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/42831807
 * Submitted at: 2023-06-22 14:23:50
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_c
 * Result: AC
 * Execution Time: 73 ms
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
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i] >> b[i] >> c[i];
  vector<vector<int>> dp(n + 1, vector<int>(3, 0));
  rep(i,n){
    dp[i+1][0] = max(dp[i][1], dp[i][2]) + a[i];
    dp[i+1][1] = max(dp[i][0], dp[i][2]) + b[i];
    dp[i+1][2] = max(dp[i][0], dp[i][1]) + c[i];
  }
  cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
  return 0;
}