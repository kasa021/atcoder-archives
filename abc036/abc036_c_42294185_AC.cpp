/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc036/submissions/42294185
 * Submitted at: 2023-06-16 10:31:13
 * Problem URL: https://atcoder.jp/contests/abc036/tasks/abc036_c
 * Result: AC
 * Execution Time: 194 ms
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
  vector<int> b = a;

  sort(all(b));
  b.erase(unique(all(b)), b.end());
  rep(i, n) {
    int ans = lower_bound(all(b), a[i]) - b.begin();
    cout << ans << endl;
  }
}