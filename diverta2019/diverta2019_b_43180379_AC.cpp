/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/diverta2019/submissions/43180379
 * Submitted at: 2023-07-02 09:12:49
 * Problem URL: https://atcoder.jp/contests/diverta2019/tasks/diverta2019_b
 * Result: AC
 * Execution Time: 22 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;


int main() {
  int r, g, b, n;
  cin>>r>>g>>b>>n;
  int ans = 0;
  rep(i,3001) {
    rep(j,3001) {
      int tmp = n - r*i - g*j;
      if (tmp >= 0 && tmp % b == 0) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
