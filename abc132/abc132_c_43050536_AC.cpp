/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/43050536
 * Submitted at: 2023-06-29 14:03:45
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_c
 * Result: AC
 * Execution Time: 39 ms
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
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  sort(all(d));
  int ans = d[n / 2] - d[n / 2 - 1];
  cout << ans << endl;
}