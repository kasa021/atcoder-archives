/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/43265187
 * Submitted at: 2023-07-05 05:56:06
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_d
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<vector<vector<double>>> dp(101, vector<vector<double>>(101, vector<double>(101, -1)));
  dp[100][100][100] = 0;

  auto f = [&](auto f, int i, int j, int k) {
    if (dp[i][j][k] > 0) return dp[i][j][k];
    if (i == 100 || j == 100 || k == 100) return 0.0;
    double res = 1;
    res += f(f, i + 1, j, k) * i / (i + j + k);
    res += f(f, i, j + 1, k) * j / (i + j + k);
    res += f(f, i, j, k + 1) * k / (i + j + k);
    return dp[i][j][k] = res;
  };
  cout << fixed << setprecision(10) << f(f, a, b, c) << endl;
  return 0;
}
