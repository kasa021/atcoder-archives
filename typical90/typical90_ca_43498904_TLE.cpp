/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43498904
 * Submitted at: 2023-07-12 03:55:41
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ca
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<vector<ll>> graph;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w, 0)), b(h, vector<int>(w, 0));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];

  int ans = 0;
  rep(i, h - 1) {
    rep(j,w-1){
      while(b[i][j] < a[i][j]){
        b[i][j]++;
        b[i + 1][j]++;
        b[i][j + 1]++;
        b[i + 1][j + 1]++;
        ans++;
      }
      while (b[i][j] > a[i][j]) {
        b[i][j]--;
        b[i + 1][j]--;
        b[i][j + 1]--;
        b[i + 1][j + 1]--;
        ans++;
      }
    }
  }
  bool ok = true;
  rep(i,h){
    rep(j,w){
      if (a[i][j] != b[i][j]) ok = false;
    }
  }
  if(ok){
    cout << "Yes" << endl;
    cout<<ans<<endl;
  }else {
    cout << "No" << endl;
  }
  return 0;
}
