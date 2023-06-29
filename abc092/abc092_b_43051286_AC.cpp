/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc092/submissions/43051286
 * Submitted at: 2023-06-29 14:39:40
 * Problem URL: https://atcoder.jp/contests/abc092/tasks/abc092_b
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  rep(i, n) {
    int j = 1;
    while (j <= d) {
      j += a[i];
      ans++;
    }
  }
  cout << ans + x << endl;
}