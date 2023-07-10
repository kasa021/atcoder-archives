/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43455401
 * Submitted at: 2023-07-10 08:27:38
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bc
 * Result: AC
 * Execution Time: 760 ms
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
#define mint modint1000000007

int main() {
  int n, p, q;
  cin >> n >> p >> q;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) a[i] %= p;
  sort(all(a));
  ll ans = 0;

  rep(i, n) rep1(j, i+1, n) rep1(k, j+1, n) rep1(l, k+1, n) rep1(m, l+1, n) {
    ll tmp = a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p;
    if (tmp == q) ans++;
  }
  cout << ans << endl;
  
}
