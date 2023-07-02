/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc008/submissions/43182434
 * Submitted at: 2023-07-02 10:38:23
 * Problem URL: https://atcoder.jp/contests/agc008/tasks/agc008_a
 * Result: WA
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
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  ll x, y;
  cin >> x >> y;
  ll ans = 0;
  if (x > 0 && y > 0) {
    if (x < y) ans = y - x;
    else
      ans = 2 + x - y;
  }
  else if (x > 0 && y < 0) {
    if (abs(x) == abs(y)) ans = 1;
    else if (abs(x) > abs(y))
      ans = 1 + x + y;
    else
      ans = 1 - y - x;
  }
  else if (x < 0 && y > 0) {
    if (abs(x) == abs(y)) ans = 1;
    else if (abs(x) > abs(y))
      ans = y - x;
    else
      ans = 1 + x + y;
  }
  else if (x < 0 && y < 0) {
    if (x < y) ans = y - x;
    else
      ans = 2 + abs(x - y);
  }
  else if (x == 0 && y > 0) {
    ans = y;
  }
  else if (x == 0 && y < 0) {
    ans = abs(y) + 1;
  }
  else if (x > 0 && y == 0) {
    ans = x + 1;
  }
  else if (x < 0 && y == 0) {
    ans = abs(x);
  }
  cout << ans << endl;
}
