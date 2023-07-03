/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/43231478
 * Submitted at: 2023-07-03 16:16:52
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/arc089_a
 * Result: AC
 * Execution Time: 59 ms
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

  int prev_x=0,prev_y=0,prev_t=0;
  bool ok = true;
  rep(i,n){
    int t,x,y;
    cin >> t >> x >> y;
    int dt = t - prev_t;
    int dist = abs(x-prev_x) + abs(y-prev_y);
    // 移動距離よりも時間が短い場合はfalse
    if(dt < dist) ok = false;
    // 移動距離と時間の偶奇が一致しない場合はfalse
    if(dist % 2 != dt % 2) ok = false;
    prev_x = x;
    prev_y = y;
    prev_t = t;
  }
  cout<<(ok ? "Yes" : "No")<<endl;
  return 0;
}
