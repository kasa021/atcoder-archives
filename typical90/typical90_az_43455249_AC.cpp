/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43455249
 * Submitted at: 2023-07-10 08:22:17
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_az
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
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define mint modint1000000007

int main() {
  int n;
  cin >> n;
  mint ans = 1;
  vector<int> a(6);
  rep(i, n) {
    rep(j,6) cin >> a[j];
    mint k=0;
    rep(j,6) k+=a[j];
    ans*=k;
  }
  cout << ans.val() << endl;
}
