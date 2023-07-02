/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/43206688
 * Submitted at: 2023-07-02 18:09:15
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: AC
 * Execution Time: 7 ms
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
  string s;
  int k;
  cin >> s >> k;
  ll ans = 0;
  auto cnt = [&](string s) {
    pair<ll, bool> ret = { 0, false };
    rep(i, s.size() - 1) {
      if (s[i] == s[i + 1]) {
        ret.first++;
        s[i + 1] = '?';
      }
    }
    ret.second = (s.back() == '?');
    return ret;
  };
  auto [a, b] = cnt(s);
  ans += a;
  auto [c, d] = cnt((b ? '?' : s.back()) + s);
  ans += c * (k / 2);
  auto [e, f] = cnt((d ? '?' : s.back()) + s);
  ans += e * ((k - 1) / 2);
  cout << ans << endl;
  return 0;
}
