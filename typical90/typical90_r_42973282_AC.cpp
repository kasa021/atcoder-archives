/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42973282
 * Submitted at: 2023-06-26 04:54:34
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_r
 * Result: AC
 * Execution Time: 13 ms
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
using ld = long double;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

ld f(ld theta, ld l, ld x, ld y){
  ld y1 = -l/2 * sin(theta);
  ld z1 = l/2 - l/2 * cos(theta);
  ld y2 = y - y1;
  ld z2 = -z1;
  ld ans = atan2(z2, sqrt(x*x + y2*y2));
  return ans * 180 / M_PI;
}

int main() {
  ld t, l, x, y;
  ll q;
  cin >> t >> l >> x >> y >> q;

  rep(i,q){
    int e;
    cin >> e;
    ld theta = 2 * M_PI * e / t;
    ld ans = f(theta, l, x, y);
    cout << fixed << setprecision(10) << (-1)*ans << endl;
  }
}