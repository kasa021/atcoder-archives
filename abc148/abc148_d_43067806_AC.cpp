/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/43067806
 * Submitted at: 2023-06-30 12:31:55
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_d
 * Result: AC
 * Execution Time: 57 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int now = 0;
  int ans = 0;
  rep(i, n) {
    if (a[i] == now + 1) {
      now++;
    } else {
      ans++;
    }
  }
  if (now == 0) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}
