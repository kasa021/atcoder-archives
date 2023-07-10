/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43454538
 * Submitted at: 2023-07-10 08:00:33
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_at
 * Result: AC
 * Execution Time: 99 ms
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
  vector<int> a(n), b(n), c(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  rep(i,n) cin>>c[i];

  rep(i,n){
    a[i] %= 46;
    b[i] %= 46;
    c[i] %= 46;
  }
  sort(all(a));
  sort(all(b));
  sort(all(c));

  vector<ll> cnt_a(46, 0), cnt_b(46, 0), cnt_c(46, 0);
  rep(i,n){
    cnt_a[a[i]]++;
    cnt_b[b[i]]++;
    cnt_c[c[i]]++;
  }
  ll ans = 0;
  rep(i,46){
    rep(j,46){
      rep(k,46){
        if((i+j+k)%46==0){
          ans += cnt_a[i]*cnt_b[j]*cnt_c[k];
        }
      }
    }
  }
  cout<<ans<<endl;
}
