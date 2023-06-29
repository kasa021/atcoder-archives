/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc014/submissions/43050373
 * Submitted at: 2023-06-29 13:56:50
 * Problem URL: https://atcoder.jp/contests/agc014/tasks/agc014_a
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll ans = 0;
  while(a%2==0 && b%2==0 && c%2==0) {
    if(a==b && b==c) {
      cout << -1 << endl;
      return 0;
    }
    ll aa = a/2;
    ll bb = b/2;
    ll cc = c/2;
    a = bb + cc;
    b = aa + cc;
    c = aa + bb;
    ans++;
  }
  cout << ans << endl;
}