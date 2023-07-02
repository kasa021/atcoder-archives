/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc009/submissions/43206539
 * Submitted at: 2023-07-02 17:52:22
 * Problem URL: https://atcoder.jp/contests/agc009/tasks/agc009_a
 * Result: AC
 * Execution Time: 73 ms
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
  ll n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  rep(i, n) {
    cin >> a[i] >> b[i];
  }
  ll ans = 0;
  for (int i = n - 1; i >= 0; i--) {
    // mod 1の時のことも考えて、ansを足す前にmod b[i]を取る
    ans += (b[i] - (a[i] + ans) % b[i]) % b[i]; 
  }
  cout << ans << endl;
}
