/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43372393
 * Submitted at: 2023-07-08 12:53:39
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_c
 * Result: WA
 * Execution Time: 413 ms
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  map<ll, ll> c;
  rep(i, n) {
    c[1] += b[i];
    c[a[i] + 1] -= b[i];
  }
  sort(all(a));
  rep(i, n) {
    if (i == 0) {
      c[a[i] + 1] += c[1];
    }
    else
      c[a[i] + 1] += c[a[i - 1] + 1];
  }
  for (auto x : c) {
    if (x.second <= k) {
      cout << x.first << endl;
      return 0;
    }
  }
}
