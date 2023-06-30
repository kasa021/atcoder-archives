/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/43070722
 * Submitted at: 2023-06-30 14:42:36
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/arc094_a
 * Result: WA
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int ans = 0;
  vector<int> a(3);
  rep(i,3) cin >> a[i];
  sort(all(a));
  ans += (a[2] - a[0]) / 2;
  ans += (a[2] - a[1]) / 2;
  a[0] += (a[2] - a[0]) / 2 * 2;
  a[1] += (a[2] - a[1]) / 2 * 2;
  if(a[0] != a[1] && a[1] != a[2]) ans += 2;
  else if(a[0] == a[1] && a[1] == a[2]) ans += 0;
  else ans += 1;
  cout << ans << endl;
}
