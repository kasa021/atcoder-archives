/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/43077399
 * Submitted at: 2023-07-01 03:44:50
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_c
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  int t = ((n % 100)+4)/5;
  int r = n / 100;
  if (t <= r) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}
