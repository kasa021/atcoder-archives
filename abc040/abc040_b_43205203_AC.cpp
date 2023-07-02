/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc040/submissions/43205203
 * Submitted at: 2023-07-02 16:01:41
 * Problem URL: https://atcoder.jp/contests/abc040/tasks/abc040_b
 * Result: AC
 * Execution Time: 4 ms
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
  int ans = 1e9;
  for (int i = 1; i * i <= n; i++) {
    int j = n / i;
    ans = min(ans, abs(i - j) + n - i * j);
  }
  cout << ans << endl;
  return 0;
}
