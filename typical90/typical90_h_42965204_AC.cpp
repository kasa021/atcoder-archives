/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42965204
 * Submitted at: 2023-06-25 14:48:35
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_h
 * Result: AC
 * Execution Time: 14 ms
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
using mint = modint1000000007;

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<vector<mint>> dp(8,vector<mint>(n+9,0));
  string t = "atcoder";
  dp[0][0] = 1;
  rep(i,n){
    rep(j,8){
      dp[j][i+1] += dp[j][i];
      if(s[i] == t[j]) dp[j+1][i+1] += dp[j][i];
    }
  }

  cout << dp[7][n].val() << endl;
}