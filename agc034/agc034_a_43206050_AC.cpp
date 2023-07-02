/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc034/submissions/43206050
 * Submitted at: 2023-07-02 17:07:54
 * Problem URL: https://atcoder.jp/contests/agc034/tasks/agc034_a
 * Result: AC
 * Execution Time: 12 ms
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
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  string s;
  cin >> s;
  a--;
  b--;
  c--;
  d--;
  if (d < c) {
    bool ok = true;
    rep1(i, a, c) {
      if (s[i] == '#' && s[i + 1] == '#') ok = false;
    }
    bool ok2 = false;
    rep1(i, b, d + 1) {
      if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') ok2 = true;
    }
    cout << (ok && ok2 ? "Yes" : "No") << endl;
  }
  else {
    bool ok = true;
    rep1(i, a, c) {
      if (s[i] == '#' && s[i + 1] == '#') ok = false;
    }
    rep1(i, b, d) {
      if (s[i] == '#' && s[i + 1] == '#') ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
  }
  return 0;
}
