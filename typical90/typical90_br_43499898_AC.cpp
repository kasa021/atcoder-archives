/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43499898
 * Submitted at: 2023-07-12 04:54:19
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_br
 * Result: AC
 * Execution Time: 89 ms
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
  int n;
  cin >> n;
  vector<ll> x(n), y(n);
  rep(i,n) cin>>x[i]>>y[i];
  sort(all(x));
  sort(all(y));
  ll ans = 0;
  ll x_middle, y_middle;
  if (n % 2 == 0) {
    x_middle = (x[n / 2 - 1] + x[n / 2]) / 2;
    y_middle = (y[n / 2 - 1] + y[n / 2]) / 2;
  } else {
    x_middle = x[n / 2];
    y_middle = y[n / 2];
  }
  rep(i,n) ans += abs(x[i] - x_middle) + abs(y[i] - y_middle);
  cout << ans << endl;
  return 0;
}
