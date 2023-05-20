/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41571533
 * Submitted at: 2023-05-20 13:15:18
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_d
 * Result: AC
 * Execution Time: 216 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;

int main(){
      ll n,m,d;
      cin>>n>>m>>d;
      ll ans=-1;
      vector<ll> a(n),b(m);
      rep(i,n) cin>>a[i];
      rep(i,m) cin>>b[i];
      sort(all(a));
      sort(all(b));
      rep(i,n){
        auto v=lower_bound(all(b),a[i]+d);
        if(abs(*v-a[i])<=d) ans=max(ans,*v+a[i]);
        if(v!=b.begin()){
            if(abs(*(v-1)-a[i])<=d) ans=max(ans,*(v-1)+a[i]);
        }
      }
      cout<< ans << endl;
    }