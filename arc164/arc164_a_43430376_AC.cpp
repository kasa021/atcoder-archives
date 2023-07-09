/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc164/submissions/43430376
 * Submitted at: 2023-07-09 13:18:14
 * Problem URL: https://atcoder.jp/contests/arc164/tasks/arc164_a
 * Result: AC
 * Execution Time: 253 ms
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

ll exponentiation_3(ll n){
  ll res = 1;
  rep(i, n){
    res *= 3;
  }
  return res;
}

  int
  main() {
  int t;
  cin >> t;
  rep(_,t){
    ll n, k,Max;
    cin >> n >> k;
    Max = n;
    vector<ll> cnt(40); // 3^i のiの個数
    ll tmp = 1,now=38;
    rep(i, 38) {
      tmp *= 3;
    }
    while(n > 0){
      if(n - tmp >= 0){
        n -= tmp;
        cnt[now]++;
      }else{
        now--;
        tmp /= 3;
      }
    }


    ll Mod = 0;
    rep(i, 40) Mod += cnt[i];
    // cout << "Mod: " << Mod << endl;
    // cout<<"k%3: "<<k%3<<endl;

    if(Max >= k && Mod <= k && (k-Mod)%2==0 ){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
