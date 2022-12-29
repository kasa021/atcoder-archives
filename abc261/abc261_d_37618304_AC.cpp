/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/37618304
 * Submitted at: 2022-12-29 12:46:40
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_d
 * Result: AC
 * Execution Time: 1432 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> x(n);
    map<ll,ll> mp;
    rep(i,n) cin>>x[i];
    rep(i,m){
        int c,y;
        cin>>c>>y;
        mp[c]=y;
    }
    vector<vector<ll>> dp(n+9,vector<ll> (n+9,0));
    rep1(i,1,n+1){
        ll m=0;
        rep(j,i){
            m=max(m,dp[i-1][j]);
        }
        dp[i][0]=max(m,dp[i-1][0]);
        rep1(j,1,i+1){
            dp[i][j]=dp[i-1][j-1]+x[i-1];
            if(mp.count(j)) dp[i][j]+=mp[j];
        }
    }
    ll ans=0;
    rep(i,n+1){
        ans=max(ans,dp[n][i]);
    }
    cout<<ans<<endl;
    // cout<<" ";
    // rep(i,n+1) cout<<i<<" ";
    // cout<<endl;
    // rep(i,n+1){
    //     cout<<i<<" ";
    //     rep(j,n+1){
    //         cout<< dp[i][j] <<" ";
    //     }cout<<endl;
    // }
    }

