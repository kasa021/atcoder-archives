/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc012/submissions/43079047
 * Submitted at: 2023-07-01 05:33:50
 * Problem URL: https://atcoder.jp/contests/agc012/tasks/agc012_a
 * Result: AC
 * Execution Time: 105 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<ll> a(3*n);
  rep(i, 3*n) cin >> a[i];
  sort(all(a));
  ll ans = 0;
  rep(i, n) {
    ans += a[3*n - 2*(i+1)];
  }
  cout << ans << endl;
}
