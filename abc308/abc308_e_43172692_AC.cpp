/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43172692
 * Submitted at: 2023-07-02 04:24:29
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_e
 * Result: AC
 * Execution Time: 76 ms
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

ll mex(ll x,ll y, ll z){
  rep(i,3){
    if(i != x && i != y && i != z) return i;
  }
  return 3;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  string s;
  cin >> s;

  vector<vector<ll>> cnt_l(n + 1, vector<ll>(3));
  vector<vector<ll>> cnt_r(n + 1, vector<ll>(3));
  rep(i,n){
    cnt_l[i + 1] = cnt_l[i];
    if (s[i] == 'M') ++cnt_l[i + 1][a[i]];
  }
  for (int i = n - 1; i >= 0;i--){
    cnt_r[i] = cnt_r[i + 1];
    if(s[i] == 'X') ++cnt_r[i][a[i]];
  }
  ll ans = 0;
  rep(i,n) {
    if(s[i] != 'E') continue;
    rep(j,3){
      rep(k,3){
        ans += cnt_l[i][j] * cnt_r[i + 1][k] * mex(j, k, a[i]);
      }
    }
  }
  cout << ans << endl;
}