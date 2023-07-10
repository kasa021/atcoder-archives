/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43454658
 * Submitted at: 2023-07-10 08:03:50
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_av
 * Result: AC
 * Execution Time: 142 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vector<ll> point;
  rep(i,n){
    point.push_back(b[i]);
    point.push_back(a[i]-b[i]);
  }
  sort(all(point), greater<ll>());
  ll ans = 0;
  rep(i,k){
    ans += point[i];
  }
  cout<<ans<<endl;
}
