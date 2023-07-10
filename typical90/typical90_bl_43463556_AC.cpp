/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43463556
 * Submitted at: 2023-07-10 13:38:12
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bl
 * Result: AC
 * Execution Time: 259 ms
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
  int n, q;
  cin >> n >> q;
  // b[i]:= a[i+1]-a[i]
  vector<ll> a(n),b(n-1);
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    if (i > 0) {
      b[i-1] = a[i] - a[i-1];
      sum += abs(b[i-1]);
    }
  }
  rep(i,q){
    int l, r;
    ll v;
    cin>>l>>r>>v;
    l--;r--;
    if(l>0){
      sum -= abs(b[l-1]);
      b[l-1] += v;
      sum += abs(b[l-1]);
    }
    if(r<n-1){
      sum -= abs(b[r]);
      b[r] -= v;
      sum += abs(b[r]);
    }
    cout<<sum<<endl;
  }

  return 0;
}
