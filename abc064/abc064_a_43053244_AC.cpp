/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/43053244
 * Submitted at: 2023-06-29 17:46:34
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_a
 * Result: AC
 * Execution Time: 5 ms
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
  int r, g, b;
  cin >> r >> g >> b;
  int num = r*100+g*10+b;
  if (num % 4 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}