/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/43078142
 * Submitted at: 2023-07-01 04:41:04
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_b
 * Result: WA
 * Execution Time: 6 ms
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
  int d, n;
  cin >> d >> n;
  int ans = n;
  rep(i,d){
    ans *= 100;
  }
  if (n == 100 && d == 0) ans++;
  cout << ans << endl;

}
