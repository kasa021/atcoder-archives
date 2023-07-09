/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43407999
 * Submitted at: 2023-07-09 05:42:25
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_c
 * Result: AC
 * Execution Time: 310 ms
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

  map<ll, ll> mp;
  rep(i, n) {
    mp[1] += ab[i].second;
    mp[ab[i].first + 1] -= ab[i].second;
  }

  for(auto &x:mp){
    if(x.first==1) continue;
    x.second += prev(mp.find(x.first))->second;
  }

  cout<<endl;
  for (auto& [key, value] : mp) {
    // cout << key << " " << value << endl;
    if (value <= k) {
      cout << key << endl;
      return 0;
    }
  }
}
