/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc017/submissions/43285619
 * Submitted at: 2023-07-06 04:47:10
 * Problem URL: https://atcoder.jp/contests/agc017/tasks/agc017_a
 * Result: AC
 * Execution Time: 8 ms
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
  int n, p;
  cin>>n>>p;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  vector<vector<ll>> dp(2,vector<ll>(n+1,0));
  dp[0][0] = 1;

  rep(i,n){
    if(a[i]%2 == 0){
      dp[0][i+1] = dp[0][i]*2;
      dp[1][i+1] = dp[1][i]*2;
    }else{
      dp[0][i+1] = dp[0][i] + dp[1][i];
      dp[1][i+1] = dp[0][i] + dp[1][i];
    }
  }
  cout << dp[p][n] << endl;
}