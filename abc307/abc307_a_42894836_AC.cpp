/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42894836
 * Submitted at: 2023-06-24 12:04:01
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_a
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
  int n;
  cin >> n;
  vector<int> a(7*n);
  rep(i, 7*n) cin >> a[i];
  int ans = 0;
  rep(i,n){
    ans = 0;
    rep(j, 7) {
      ans += a[i * 7 + j];
    }
    cout<< ans << endl;
  }
}