/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/43053364
 * Submitted at: 2023-06-29 18:14:17
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_a
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  cout << (n + 1) / 2 << endl;
}