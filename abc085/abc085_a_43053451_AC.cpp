/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc085/submissions/43053451
 * Submitted at: 2023-06-29 18:38:43
 * Problem URL: https://atcoder.jp/contests/abc085/tasks/abc085_a
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
  string s;
  cin >> s;
  s[3] = '8';
  cout << s << endl;
}