/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43409938
 * Submitted at: 2023-07-09 06:57:55
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ap
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
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define mint modint1000000007

int main() {
  int k;
  cin>>k;
  mint ans = 0;
  if(k%9!=0){
    cout << 0 << endl;
    return 0;
  }

  vector<mint> dp(k+1, 0);  // dp[i] := iを作るための場合の数
  dp[0] = 1;
  rep(i,k){
    rep1(j,1,10){
      if(i+j<=k) dp[i+j] += dp[i];
    }
  }
  cout << dp[k].val() << endl;

}
