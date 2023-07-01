/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc097/submissions/43077436
 * Submitted at: 2023-07-01 03:47:43
 * Problem URL: https://atcoder.jp/contests/abc097/tasks/abc097_b
 * Result: AC
 * Execution Time: 11 ms
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
  int ans = 1;
  for (int i = 2; i* i <= n; i++) {
    int tmp = i;
    while (tmp * i <= n) {
      tmp *= i;
      ans=max(ans, tmp);
    }
  }
  cout << ans << endl;
}
