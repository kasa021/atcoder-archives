/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc047/submissions/43181542
 * Submitted at: 2023-07-02 09:55:22
 * Problem URL: https://atcoder.jp/contests/abc047/tasks/arc063_a
 * Result: AC
 * Execution Time: 10 ms
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
  string s;
  cin >> s;
  ll n = s.size();
  ll ans = 0;
  char now = s[0];
  rep1(i, 1, n) {
    if (now != s[i]) {
      ans++;
      now = s[i];
    }
  }
  cout << ans << endl;
}
