/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc015/submissions/43180543
 * Submitted at: 2023-07-02 09:18:03
 * Problem URL: https://atcoder.jp/contests/agc015/tasks/agc015_a
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
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;


int main() {
  ll n, a, b;
  cin>>n>>a>>b;

  if(n==1) {
    if(a==b) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
  }
  if(a>b) {
    cout<<0<<endl;
    return 0;
  }

  ll ans = (a+b+(n-2)*b) - (a+b+(n-2)*a) + 1;
  cout<<ans<<endl;
}
