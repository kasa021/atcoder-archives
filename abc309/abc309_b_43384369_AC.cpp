/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43384369
 * Submitted at: 2023-07-08 13:26:24
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_b
 * Result: AC
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
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  char c=s[1][0];
  rep(i,n-1){
    char tmp=s[0][i];
    s[0][i] = c;
    c = tmp;
  }
  rep(i,n-1){
    char tmp=s[i][n-1];
    s[i][n-1] = c;
    c = tmp;
  }
  rep(i,n-1){
    char tmp=s[n-1][n-1-i];
    s[n-1][n-1-i] = c;
    c = tmp;
  }
  rep(i,n-1){
    char tmp=s[n-1-i][0];
    s[n-1-i][0] = c;
    c = tmp;
  }
  // cout<<endl;
  rep(i,n){
    rep(j,n){
      cout<<s[i][j];
    }
    cout<<endl;
  }
}

