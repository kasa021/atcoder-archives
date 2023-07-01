/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc040/submissions/43079932
 * Submitted at: 2023-07-01 06:17:42
 * Problem URL: https://atcoder.jp/contests/agc040/tasks/agc040_a
 * Result: WA
 * Execution Time: 26 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  string s;
  cin >> s;
  vector<ll> a(s.size() + 1, -1);
  rep(i, s.size()) {
    if (s[i] == '<') {
      if (i == 0) a[i] = 0;
      else {
        if (s[i - 1] == '<') a[i] = a[i - 1] + 1;
        else
          a[i] = 0;

        if(i == s.size()-1){
          a[i+1] = a[i] + 1;
        }
      }
    }
  }

  for (ll i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '>') {
      if (i == s.size() - 1) a[i + 1] = 0;
      else {
        if (s[i + 1] == '>') a[i + 1] = a[i + 2] + 1;
        else
          a[i + 1] = 0;

          if(i == 0){
            a[i] = a[i+1] + 1;
          }
      }
    }
  }

  rep(i, s.size() - 1) {
    if (s[i] == '<' && s[i + 1] == '>') {
      a[i + 1] = max(a[i], a[i + 2]) + 1;
    }
  }

  // rep(i,s.size()+1) cout << a[i] << " ";
  // cout << endl;

  ll ans = 0;
  rep(i, s.size() + 1) ans += a[i];
  cout << ans << endl;
  return 0;
}
