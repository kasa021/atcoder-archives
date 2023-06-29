/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/43053285
 * Submitted at: 2023-06-29 17:54:18
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_a
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, a;
  cin >> n >> a;
  while(n - 500 >= 0) n -= 500;
  if (n <= a) cout << "Yes" << endl;
  else cout << "No" << endl;
}