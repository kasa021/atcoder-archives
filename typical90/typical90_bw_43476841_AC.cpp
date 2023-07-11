/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43476841
 * Submitted at: 2023-07-11 05:41:47
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bw
 * Result: AC
 * Execution Time: 18 ms
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

ll primef(ll n){
    ll x=n;
    ll res=0;
    for(ll i=2;i*i<=n;i++){
        ll cnt=0;
        if(x%i) continue;
        while(x%i==0){
            cnt++;
            x/=i;
        }
        res+=cnt;
    }
    if(x!=1) res++;
    return res;
}

int main() {
  ll n;
  cin >> n;

  ll cnt = primef(n);

  rep(i, 64) {
    if ((1LL << i) >= cnt) {
      cout << i << endl;
      return 0;
    }
  }
}
