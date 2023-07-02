/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc028/submissions/43206209
 * Submitted at: 2023-07-02 17:19:17
 * Problem URL: https://atcoder.jp/contests/agc028/tasks/agc028_a
 * Result: RE
 * Execution Time: 125 ms
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
  string s, t;
  cin >> s >> t;
  int s_size = s.size();
  int t_size = t.size();
  int g = gcd(s_size, t_size);
  int l = s_size * t_size / g;
  bool ok = true;
  vector<char> ans(l, ' ');
  rep(i,s_size){
    ans[i * l / s_size] = s[i];
  }
  rep(i,t_size){
    if(ans[i * l / t_size] == ' '){
      ans[i * l / t_size] = t[i];
    }else if(ans[i * l / t_size] != t[i]){
      ok = false;
      break;
    }
  }
  if(ok){
    cout << l << endl;
  }else{
    cout << -1 << endl;
  }
  return 0;
}
