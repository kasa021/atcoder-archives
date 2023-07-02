/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc034/submissions/43205930
 * Submitted at: 2023-07-02 16:57:00
 * Problem URL: https://atcoder.jp/contests/agc034/tasks/agc034_a
 * Result: WA
 * Execution Time: 11 ms
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
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  string s;
  cin >> s;
  if(a<b && b<d && d<c){
    bool ok=true;
    rep(i,n-1){
      if(s[i]=='#' && s[i+1]=='#') ok = false;
    }
    bool ok2 = false;
    rep1(i,1,n-1){
      if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.') ok2 = true;
    }
    cout<<(ok && ok2 ? "Yes" : "No")<<endl;
  }else {
    bool ok = true;
    rep(i, n - 1) {
      if (s[i] == '#' && s[i + 1] == '#') ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
  }
  return 0;
}
