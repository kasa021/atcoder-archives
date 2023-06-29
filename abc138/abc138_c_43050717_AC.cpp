/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/43050717
 * Submitted at: 2023-06-29 14:11:59
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_c
 * Result: AC
 * Execution Time: 8 ms
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
  cin>>n;
  vector<double> d(n);
  rep(i,n) cin>>d[i];
  sort(all(d));
  double ans = (d[0] + d[1])/2.0;
  rep1(i, 2, n) {
    ans = (ans + d[i])/2.0;
  }
  cout << fixed << setprecision(10) << ans << endl;
}