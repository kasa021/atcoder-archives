/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/43077993
 * Submitted at: 2023-07-01 04:30:09
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/arc090_a
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;


int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(2,vector<int>(n));
  rep(i,2)rep(j,n) cin >> a[i][j];

  // 全探索
  int ans = 0;
  rep(i,n) {
    int tmp = 0;
    for(int j = 0; j <= i; j++) {
      tmp += a[0][j];
    }
    for(int j = i; j < n; j++) {
      tmp += a[1][j];
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
