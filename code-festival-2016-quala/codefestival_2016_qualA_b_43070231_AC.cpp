/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-quala/submissions/43070231
 * Submitted at: 2023-06-30 14:16:25
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
 * Result: AC
 * Execution Time: 38 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i], a[i]--;
  int ans = 0;
  rep(i, n) {
    if (a[a[i]] == i) ans++;
  }
  cout << ans / 2 << endl;
}
