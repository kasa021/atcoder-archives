/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/37634074
 * Submitted at: 2022-12-30 10:30:33
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_d
 * Result: AC
 * Execution Time: 52 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    ll n,sum=0;
    cin>>n;
    vector<ll> a(n+9);
    rep(i,n) cin>>a[i];
    vector<vector<ll>> dp(n+1,vector<ll>(2,-1e18));
    dp[0][0]=0;
    rep(i,n){
        dp[i+1][0]=max(dp[i][0]+a[i],dp[i][1]-a[i]);
        dp[i+1][1]=max(dp[i][0]-a[i],dp[i][1]+a[i]);
    }
    cout<< dp[n][0] << endl;
}
