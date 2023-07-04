/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43249843
 * Submitted at: 2023-07-04 12:28:45
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_g
 * Result: AC
 * Execution Time: 80 ms
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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i,m){
    int x, y;
    cin >> x >> y;
    x--; y--;
    g[x].push_back(y);
  }
  vector<int> dp(n, -1);
  auto rec = [&](auto &&rec, int v) -> int {
    if (dp[v] != -1) return dp[v];
    int res = 0;
    for (int nv : g[v]) {
      res = max(res, rec(rec, nv) + 1);
    }
    return dp[v] = res;
  };
  
  int ans = 0;
  rep(i,n) ans = max(ans, rec(rec, i));
  cout << ans << endl;
  
}
