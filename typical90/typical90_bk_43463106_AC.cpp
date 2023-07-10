/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43463106
 * Submitted at: 2023-07-10 13:20:57
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bk
 * Result: AC
 * Execution Time: 48 ms
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

int count(vector<int> s) {
  int res = 0;
  map<int, int> mp;
  rep(i,s.size()){
    if(s[i] ==-1) continue;
    mp[s[i]]++;
  }
  for (auto p : mp) {
    res = max(res, p.second);
  }
  return res;
}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> P(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) cin >> P[i][j];
  }

  int ans = 0;
  rep(i, (1 << h)) {
    vector<int> s(w,0);
    rep(j, h) {
      if(i & (1<<j)){
        rep(k, w){
          if (s[k] == 0) s[k] = P[j][k];
          else if (s[k] != P[j][k]) s[k] = -1;
        }
      }
    }
    int cnt = count(s);
    ans = max(ans, cnt * __builtin_popcount(i));
  }
  cout << ans << endl;
  return 0;
}
