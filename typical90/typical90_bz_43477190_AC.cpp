/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43477190
 * Submitted at: 2023-07-11 06:00:34
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bz
 * Result: AC
 * Execution Time: 52 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> cnt(n);
  rep(i,m){
    int a, b;
    cin >> a >> b;
    a--, b--;
    cnt[max(a, b)]++;
  }
  int ans = 0;
  rep(i,n) if(cnt[i] == 1) ans++;
  cout << ans << endl;
  return 0;
}
