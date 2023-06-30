/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/43067340
 * Submitted at: 2023-06-30 12:10:43
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_b
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, t, a;
  cin>>n>>t>>a;
  vector<int> h(n);
  rep(i, n) cin>>h[i];

  double min_diff = 1e9;
  int ans = 0;
  rep(i, n) {
    double diff = abs(a - (t - h[i] * 0.006));
    if (diff < min_diff) {
      min_diff = diff;
      ans = i + 1;
    }
  }

  cout << ans << endl;
}
