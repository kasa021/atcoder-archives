/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/43051824
 * Submitted at: 2023-06-29 15:18:01
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_b
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
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0;
  ans += (n / (a + b)) * a;
  ans += min(n % (a + b), a);
  cout << ans << endl;
}