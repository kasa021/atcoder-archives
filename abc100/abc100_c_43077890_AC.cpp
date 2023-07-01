/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/43077890
 * Submitted at: 2023-07-01 04:20:55
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_c
 * Result: AC
 * Execution Time: 14 ms
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
  vector<int> a(n);
  int ans = 0;
  rep(i, n) cin >> a[i];

  rep(i,n){
    while(a[i] % 2 == 0){
      a[i] /= 2;
      ans++;
    }
  }
  cout << ans << endl;
}
