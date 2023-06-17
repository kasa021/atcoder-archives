/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc306/submissions/42321721
 * Submitted at: 2023-06-17 12:03:07
 * Problem URL: https://atcoder.jp/contests/abc306/tasks/abc306_b
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  vector<ll> a(64);
  rep(i,64) cin>>a[i];
  ll ans = 0,j=1;
  rep(i,64){
    ans+=a[i]*j;
    j*=2;
  }
  cout << ans << endl;
} 