/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/43053414
 * Submitted at: 2023-06-29 18:25:28
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/abc095_a
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
  string s;
  cin >> s;
  int ans = 700;
  rep(i, 3) {
    if (s[i] == 'o') ans += 100;
  }
  cout << ans << endl;
}