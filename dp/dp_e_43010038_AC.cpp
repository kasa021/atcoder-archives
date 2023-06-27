/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43010038
 * Submitted at: 2023-06-27 17:46:51
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_e
 * Result: AC
 * Execution Time: 45 ms
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

const int INF = 1001001001;

int main() {
  int n, w;
  cin >> n >> w;
  vector<int> weight(n), value(n);
  rep(i, n) cin >> weight[i] >> value[i];
  // N<=100,v[i]<=1000なのでdp[i][j]のjは100000を超えない
  // INFで初期化しておく
  vector<vector<int>> dp(n + 1, vector<int>(100009, INF));
  // DPテーブルで書いたように遷移させる
  dp[0][0] = 0;
  dp[0][value[0]] = weight[0];
  rep1(i,1,n){
    rep(j,100001){
      if(j-value[i]>=0){
        dp[i][j] = min(dp[i-1][j], dp[i-1][j-value[i]]+weight[i]);
      }else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  int ans = 0;
  rep(i,100001){
    if(dp[n-1][i]<=w) ans = i;
  }
  cout << ans << endl;
}