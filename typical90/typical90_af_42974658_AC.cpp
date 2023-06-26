/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42974658
 * Submitted at: 2023-06-26 05:57:48
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_af
 * Result: AC
 * Execution Time: 91 ms
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
  vector<vector<int>> a(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  int m;
  cin >> m;
  set<P> s;
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    s.insert({x, y});
    s.insert({y, x});
  }

  vector<int> v;
  rep(i,n) v.push_back(i);
  int ans = 1e9;
  do {
    int sum = 0;
    bool ok = true;
    rep(i, n - 1) {
      if (s.count({v[i], v[i + 1]})) {
        ok = false;
        break;
      }
      sum += a[v[i]][i];
    }
    sum += a[v[n - 1]][n - 1];
    if (ok) ans = min(ans, sum);
  } while (next_permutation(all(v)));
  if (ans == 1e9) ans = -1;
  cout << ans << endl;
}