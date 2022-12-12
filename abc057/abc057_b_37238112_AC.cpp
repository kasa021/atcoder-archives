/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/37238112
 * Submitted at: 2022-12-12 14:26:11
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_b
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
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;

int main(){
      ll n,m;
      cin>>n>>m;
      vector<ll> a(n),b(n),c(m),d(m);
      rep(i,n) cin>>a[i]>>b[i];
      rep(i,m) cin>>c[i]>>d[i];
      rep(i,n){
        ll now=LLONG_MAX,idx=0,x;
        rep(j,m){
            x=abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(now>x){
                now=x;
                idx=j+1;
            }
        }
        cout<< idx << endl;
      }
    }