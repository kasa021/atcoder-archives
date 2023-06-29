/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/43051780
 * Submitted at: 2023-06-29 15:13:56
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_d
 * Result: AC
 * Execution Time: 2 ms
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
  ll h;
  cin >> h;
  ll ans = 0;
  ll cnt = 1;
  while (h > 0) {
    ans += cnt;
    h /= 2;
    cnt *= 2;
  }
  cout << ans << endl;
}