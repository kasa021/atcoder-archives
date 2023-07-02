/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/43206566
 * Submitted at: 2023-07-02 17:56:24
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_c
 * Result: AC
 * Execution Time: 7 ms
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
  ll ans = 1;
  rep(i, n) {
    ll t;
    cin >> t;
    ans = lcm(ans, t);
  }
  cout << ans << endl;
}
