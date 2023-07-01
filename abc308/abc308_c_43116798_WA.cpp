/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43116798
 * Submitted at: 2023-07-01 12:30:52
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: WA
 * Execution Time: 478 ms
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
using T = tuple<double, ll, ll, ll>;
using graph = vector<vector<ll>>;

bool compare(const T& x, const T& y) {
  const double EPS = 1e-12;
  if (abs(get<0>(x) - get<0>(y)) > EPS)
    return get<0>(x) > get<0>(y);
  else
    return get<1>(x) < get<1>(y);
}

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vector<T> p(n);
  rep(i, n) {
    ll up = a[i], down = a[i] + b[i];
    ll gcd = __gcd(up, down);
    up /= gcd;
    down /= gcd;
    p[i] = {
      up / (double) down,
      i,
      up,
      down,
    };
  }
  sort(all(p), compare);

  cout<<fixed<<setprecision(10);
  rep(i, n) {
    cout << get<1>(p[i]) + 1  << endl;
  }


}