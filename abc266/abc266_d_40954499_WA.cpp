/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/40954499
 * Submitted at: 2023-04-26 05:33:51
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_d
 * Result: WA
 * Execution Time: 158 ms
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    int n;
    cin>>n;
    map<P,ll> mp;
    rep(i,n){
        int t,x,a;
        cin>>t>>x>>a;
        mp[P(t,x)]=a;
    }
    vector<vector<ll>> dp(100005,vector<ll>(5,0));
    rep(i,100000){
        rep(j,5){
            if(i<j) continue;
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
            if(j>0) dp[i+1][j]=max(dp[i+1][j],dp[i][j-1]);
            if(j<4) dp[i+1][j]=max(dp[i+1][j],dp[i][j+1]);
            if(mp.count(P(i,j))) dp[i+1][j]+=mp[P(i,j)];
        }
    }
    ll ans=0;
    rep(i,5) ans=max(ans,dp[100000][i]);
    cout<< ans << endl;
}