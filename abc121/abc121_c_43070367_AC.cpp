/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/43070367
 * Submitted at: 2023-06-30 14:23:54
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_c
 * Result: AC
 * Execution Time: 68 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> ab(n);
  rep(i, n) cin >> ab[i].first >> ab[i].second;
  sort(all(ab));
  ll ans = 0;
  rep(i, n) {
    if (m <= ab[i].second) {
      ans += ab[i].first * m;
      break;
    } else {
      ans += ab[i].first * ab[i].second;
      m -= ab[i].second;
    }
  }
  cout << ans << endl;
}
