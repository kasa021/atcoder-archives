/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42972846
 * Submitted at: 2023-06-26 04:32:44
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_n
 * Result: AC
 * Execution Time: 74 ms
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
  cin >> n;
  vector<ll> a(n), b(n);
  ll ans = 0;
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  sort(all(a));
  sort(all(b));
  rep(i, n) ans += abs(a[i] - b[i]);
  cout << ans << endl;
}