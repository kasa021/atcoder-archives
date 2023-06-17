/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc306/submissions/42353443
 * Submitted at: 2023-06-17 12:53:31
 * Problem URL: https://atcoder.jp/contests/abc306/tasks/abc306_d
 * Result: AC
 * Execution Time: 156 ms
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
  cin>>n;
  vector<ll> x(n),y(n);
  rep(i,n) cin>>x[i]>>y[i];
  vector<vector<ll>> dp(n+1,vector<ll>(2));
  dp[0][0]=0;
  rep(i,n){
    if(x[i] == 0){
      dp[i+1][0] = max({dp[i][0]+y[i],dp[i][1]+y[i],dp[i][0]});
      dp[i+1][1] = max({dp[i+1][1],dp[i][1]});
    }else {
      dp[i+1][1] = max({dp[i][0]+y[i],dp[i][1],dp[i+1][1]});
      dp[i+1][0] = max({dp[i][0],dp[i+1][0]});
    }
  }
  ll ans = max(dp[n][0],dp[n][1]);
  cout << ans << endl;
}