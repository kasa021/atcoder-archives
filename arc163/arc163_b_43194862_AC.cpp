/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc163/submissions/43194862
 * Submitted at: 2023-07-02 13:01:24
 * Problem URL: https://atcoder.jp/contests/arc163/tasks/arc163_b
 * Result: AC
 * Execution Time: 80 ms
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
  ll n, m;
  cin >> n >> m;
  ll first, last;
  cin >> first >> last;
  vector<ll> a(n - 2);
  rep(i, n - 2) cin >> a[i];
  sort(all(a));

  auto left = lower_bound(all(a), first);
  auto right = upper_bound(all(a), last);
  // すでに範囲の中にあるものの数
  ll count = right - left;
  // cout << count<< endl;
  ll l_idx = left - a.begin();
  ll r_idx = right - a.begin();
  // cout<<l_idx<<" "<<r_idx<<endl;
  ll rest = m - count;
  if (rest <= 0) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = 1e18;
  rep(i, rest + 1) {
    // cout << l_idx - i << " " << r_idx + (rest - i) << endl;
    if (l_idx - i < 0 || r_idx + (rest - i) >= n - 1) continue;
    if (i == 0) ans = min(ans, a[r_idx + (rest - i) - 1] - last);
    else if (i == rest)
      ans = min(ans, first - a[l_idx - i]);
    else
      ans = min(ans, (first - a[l_idx - i]) + (a[r_idx + (rest - i) - 1] - last));

  }
  cout << ans << endl;
}
