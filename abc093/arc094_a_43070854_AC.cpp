/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/43070854
 * Submitted at: 2023-06-30 14:49:34
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/arc094_a
 * Result: AC
 * Execution Time: 6 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  sort(all(a));

  int odd = 0, even = 0;
  rep(i,3){
    if(a[i] % 2 == 0) even++;
    else odd++;
  }

  int ans = 0;
  if(odd == 2){
    ans++;
    rep(i,3){
      if(a[i] % 2 == 1) a[i]++;
    }
  }else if(even == 2){
    ans++;
    rep(i,3){
      if(a[i] % 2 == 0) a[i]++;
    }
  }

  int ma = max({a[0], a[1], a[2]});
  rep(i,3) ans += (ma - a[i]) / 2;

  cout << ans << endl;
}
