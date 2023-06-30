/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/43067020
 * Submitted at: 2023-06-30 11:56:59
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_b
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
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  rep(i, n) rep(j, d) cin >> x[i][j];

  int ans = 0;

  rep(i, n) {
    rep(j, i) {
      int dist = 0;
      rep(k, d) {
        dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      int dist2 = sqrt(dist);
      if (dist2 * dist2 == dist) ans++;
    }
  }

  cout << ans << endl;
}