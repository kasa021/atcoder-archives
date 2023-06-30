/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/43066141
 * Submitted at: 2023-06-30 10:57:23
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_c
 * Result: AC
 * Execution Time: 40 ms
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int ans = 0;
  int cnt = 0;
  rep(i, n - 1) {
    if (h[i] >= h[i + 1]) {
      cnt++;
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  ans = max(ans, cnt);
  cout << ans << endl;
}