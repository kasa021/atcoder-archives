/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc068/submissions/43050195
 * Submitted at: 2023-06-29 13:50:03
 * Problem URL: https://atcoder.jp/contests/abc068/tasks/abc068_b
 * Result: AC
 * Execution Time: 4 ms
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
  int ans = 1;
  while(ans <= n) {
    ans *= 2;
  }
  cout << ans / 2 << endl;
}