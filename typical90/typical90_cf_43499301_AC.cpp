/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43499301
 * Submitted at: 2023-07-12 04:18:15
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cf
 * Result: AC
 * Execution Time: 44 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<vector<ll>> graph;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  ll n;
  string a;
  cin >> n >> a;
  vector<pair<char, ll>> rle(0);
  rle.push_back({ a[0], 0 });
  rep(i,a.size()){
    if(rle.back().first == a[i]) rle.back().second++;
    else rle.push_back({ a[i], 1 });
  }

  ll ans = n*(n+1)/2;
  for(auto p : rle){
    ans -= p.second*(p.second+1)/2;
  }
  cout << ans << endl;
}
