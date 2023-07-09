/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc164/submissions/43440524
 * Submitted at: 2023-07-09 18:12:52
 * Problem URL: https://atcoder.jp/contests/arc164/tasks/arc164_c
 * Result: AC
 * Execution Time: 122 ms
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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int cnt = 0;
  rep(i, n) {
    if (a[i] > b[i]) cnt++;
  }
  ll ans = 0;
  if (cnt % 2 == 0) {
    rep(i, n) ans += max(a[i], b[i]);
    cout << ans << endl;
    return 0;
  }
  else {
    int idx = 0;
    ll min_diff = 1001001001;
    rep(i, n) {
      if(abs(a[i] - b[i]) < min_diff) {
        min_diff = abs(a[i] - b[i]);
        idx = i;
      }
    }
    rep(i, n) {
      if(i==idx){
        ans+=min(a[i], b[i]);
      }else {
        ans +=max(a[i], b[i]);
      }
    }
    cout << ans << endl;
  }
}
