/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/38445153
 * Submitted at: 2023-01-29 07:33:49
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_d
 * Result: AC
 * Execution Time: 1370 ms
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
using ull=unsigned long long;
//typedef modll1000000007 mll;


int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> x(n);
    rep(i,n) cin>>x[i];
    map<ll,ll> mp;
    rep(i,m){
        ll a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    vector<vector<ll>> dp(n+9,vector<ll> (n+9,0));
    ll ma=0;
    rep(i,n){
        dp[i+1][0]=ma;
        rep(j,i+1){
            dp[i+1][j+1]=dp[i][j]+x[i];
            if(mp.count(j+1)) dp[i+1][j+1]+=mp[j+1];
            ma=max(ma,dp[i+1][j+1]);
        }
    }
    cout<< ma << endl;
    // rep(i,n+1){
    //     rep(j,n+1){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    }
