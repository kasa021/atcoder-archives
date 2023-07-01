/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/43078835
 * Submitted at: 2023-07-01 05:21:22
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_c
 * Result: AC
 * Execution Time: 69 ms
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
  vector<ll> a(n+1), b(n);
  rep(i, n+1) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll ans = 0;
  rep(i,n){
    ll tmp = min(a[i], b[i]);
    ans += tmp;
    a[i] -= tmp;
    b[i] -= tmp;
    tmp = min(a[i+1], b[i]);
    ans += tmp;
    a[i+1] -= tmp;
    b[i] -= tmp;
  }
  cout << ans << endl;
  return 0;
}
