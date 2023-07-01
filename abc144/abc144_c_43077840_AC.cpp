/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc144/submissions/43077840
 * Submitted at: 2023-07-01 04:17:52
 * Problem URL: https://atcoder.jp/contests/abc144/tasks/abc144_c
 * Result: AC
 * Execution Time: 24 ms
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

vector<P> divisor(ll n){
  vector<P> res;
  for(ll i = 1; i * i <= n; i++){
    if(n % i == 0){
      res.push_back(P(i, n / i));
      if(i != n / i) res.push_back(P(n / i, i));
    }
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  vector<P> div = divisor(n);
  ll ans = 1e13;
  for(auto p : div){
    ll a = p.first;
    ll b = p.second;
    ans = min(ans, a + b - 2);
  }
  cout << ans << endl;
}
