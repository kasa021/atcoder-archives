/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/43066108
 * Submitted at: 2023-06-30 10:55:29
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_b
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
  int n;
  cin >> n;
  vector<ll> a(n + 1);
  a[0] = 2;
  a[1] = 1;
  rep1(i, 2, n + 1) {
    a[i] = a[i - 1] + a[i - 2];
  }
  cout << a[n] << endl;
}