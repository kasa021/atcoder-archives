/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43407362
 * Submitted at: 2023-07-09 05:10:32
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_c
 * Result: AC
 * Execution Time: 188 ms
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
  ll n, k;
  cin >> n >> k;
  vector<P> ab(n);
  rep(i, n) cin >> ab[i].first >> ab[i].second;
  sort(all(ab));

  ll sum = 0;
  rep(i,n) sum+=ab[i].second;

  if (sum <= k) cout << 1 << endl;
  else {
    rep(i,n){
      if(sum<=k){
        cout<<ab[i-1].first+1<<endl;
        return 0;
      }
      sum-=ab[i].second;
    }
    cout<<ab[n-1].first+1<<endl;
  }
  return 0;
}
