/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/40954583
 * Submitted at: 2023-04-26 05:39:22
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_d
 * Result: WA
 * Execution Time: 83 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    int n;
    cin>>n;
    vector<vector<ll>> mp(100005,vector<ll>(5,0));
    rep(i,n){
        ll t,x,a;
        cin>>t>>x>>a;
        mp[t][x]=a;
    }
    vector<vector<ll>> dp(100005,vector<ll>(5,0));
    rep(i,100000){
        rep(j,5){
            if(i<j) continue;
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
            if(j>0) dp[i+1][j]=max(dp[i+1][j],dp[i][j-1]);
            if(j<4) dp[i+1][j]=max(dp[i+1][j],dp[i][j+1]);
            dp[i+1][j]+=mp[i][j];
        }
    }
    ll ans=0;
    rep(i,5) ans=max(ans,dp[10000][i]);
    cout<< ans << endl;
}