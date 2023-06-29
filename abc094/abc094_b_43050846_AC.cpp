/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/43050846
 * Submitted at: 2023-06-29 14:17:02
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/abc094_b
 * Result: AC
 * Execution Time: 6 ms
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
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  auto itr = lower_bound(all(a), x) - a.begin();
  auto itr2 = a.end() - lower_bound(all(a), x);
  cout << min(itr, itr2) << endl;
}