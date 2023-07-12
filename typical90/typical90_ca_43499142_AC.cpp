/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43499142
 * Submitted at: 2023-07-12 04:09:13
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ca
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<vector<ll>> graph;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w, 0)), b(h, vector<ll>(w, 0));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];

  ll ans = 0;
  rep(i, h-1) {
    rep(j, w-1) {
      ans += abs(a[i][j] - b[i][j]);
      b[i + 1][j] += a[i][j] - b[i][j];
      b[i][j + 1] += a[i][j] - b[i][j];
      b[i + 1][j + 1] += a[i][j] - b[i][j];
      b[i][j] = a[i][j];
    }
  }
  bool ok = true;
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] != b[i][j]) ok = false;
    }
  }
  if (ok) {
    cout << "Yes" << endl;
    cout << ans << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
