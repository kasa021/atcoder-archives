/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42972886
 * Submitted at: 2023-06-26 04:35:32
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_p
 * Result: AC
 * Execution Time: 770 ms
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
  ll n, a, b, c;
  cin>>n>>a>>b>>c;
  ll ans = 1001001001001001001;
  rep(i, 10000){
    rep(j, 10000){
      ll x = n - a * i - b * j;
      if (x < 0) continue;
      if (x % c == 0) ans = min(ans, i + j + x / c);
    }
  }
  cout << ans << endl;
}