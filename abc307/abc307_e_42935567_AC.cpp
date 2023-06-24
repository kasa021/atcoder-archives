/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42935567
 * Submitted at: 2023-06-24 15:44:55
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_e
 * Result: AC
 * Execution Time: 88 ms
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
using mint = modint998244353;

int main() {
  int n, m;
  cin>>n>>m;
  vector<vector<mint>> dp(n+9,vector<mint>(2,0));
  dp[0][1] = 1;
  rep(i,n-1){
    dp[i + 1][0] += (m - 2) * dp[i][0];
    dp[i+1][0] += (m - 1) * dp[i][1];
    dp[i+1][1] += dp[i][0];
  }
  cout << (dp[n-1][0]*m).val() << endl;
}