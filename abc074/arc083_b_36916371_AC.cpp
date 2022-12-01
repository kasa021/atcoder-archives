/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc074/submissions/36916371
 * Submitted at: 2022-12-01 14:11:29
 * Problem URL: https://atcoder.jp/contests/abc074/tasks/arc083_b
 * Result: AC
 * Execution Time: 91 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;


int main(){
    int n;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll>(n,0));
    rep(i,n)rep(j,n) cin>>a[i][j];
    ll ans=0;
    rep(k,n){
        rep(i,n){
            rep(j,n){
                if(a[i][k]+a[k][j]<a[i][j]) ans=-1;
            }
        }
    }
    
    if(ans!=-1){
        rep(i,n){
            rep(j,n){
                ans+=a[i][j];
            }
        }
    
    rep(i,n){
        rep(j,n){
            bool f=false;
            rep(k,n){
                if(i==k || j==k) continue;
                if(a[i][k]+a[k][j]==a[i][j]) f=true;
            }
            if(f) ans-=a[i][j];
        }
    }
      ans/=2;
    }
    
    cout<< ans << endl;
    }
