/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/31104329
 * Submitted at: 2022-04-19 14:13:45
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/dp_d
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;

ll n,W;
ll w[109],v[109];
ll dp[109][100009];
int main(){
    cin>>n>>W;
    for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
    dp[0][0] = 0;
    for(int i=1;i<=W;i++) d[0][i] = -(1ll<<60);

    for(int i=1;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(j<w[i]) dp[i][j] = dp[i-1][j];
            if(j>=w[i]) dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] + v[i]);
        }
    }
    ll ans =0;
    for(int i=0;i<=W;i++) ans = max(ans,dp[n][i]);
    cout<<ans<<endl;
    return 0;
}