/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/43077917
 * Submitted at: 2023-07-01 04:23:05
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/arc090_a
 * Result: AC
 * Execution Time: 14 ms
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
  vector<int> sum(n+1), sum2(n+1);
  rep(i,n) sum[i+1] = sum[i] + a[0][i];
  rep(i,n) sum2[i+1] = sum2[i] + a[1][i];
  int ans = 0;
  rep(i,n) {
    int tmp = sum[i+1] + sum2[n] - sum2[i];
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}
