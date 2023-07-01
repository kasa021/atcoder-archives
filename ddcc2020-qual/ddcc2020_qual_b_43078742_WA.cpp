/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/43078742
 * Submitted at: 2023-07-01 05:16:17
 * Problem URL: https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_b
 * Result: WA
 * Execution Time: 74 ms
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
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<int> sum(n + 1);
  rep(i,n) sum[i + 1] = sum[i] + a[i];
  int ans = 1e9;
  rep(i,n) {
    int l = sum[i + 1];
    int r = sum[n] - sum[i + 1];
    ans = min(ans, abs(l - r));
  }
  cout << ans << endl; 
}
