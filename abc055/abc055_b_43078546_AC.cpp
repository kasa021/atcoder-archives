/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc055/submissions/43078546
 * Submitted at: 2023-07-01 05:07:04
 * Problem URL: https://atcoder.jp/contests/abc055/tasks/abc055_b
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
using mint = modint1000000007;

int main() {
  int n;
  cin >> n;
  mint ans = 1;
  rep1(i,1,n+1){
    ans *= i;
  }
  cout << ans.val() << endl;
}
