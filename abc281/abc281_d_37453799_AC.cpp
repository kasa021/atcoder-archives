/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37453799
 * Submitted at: 2022-12-23 04:37:41
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_d
 * Result: AC
 * Execution Time: 14 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int n,k,d;
    cin>>n>>k>>d;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector dp(n+1,vector(k+1,vector<ll>(d,-1)));
    dp[0][0][0]=0;

    rep(i,n){
        rep(j,k+1){
            rep(l,d){
                if(dp[i][j][l]==-1) continue;
                dp[i+1][j][l]=max(dp[i+1][j][l],dp[i][j][l]);
                if(j!=k){
                    dp[i+1][j+1][(l+a[i])%d] = max(dp[i+1][j+1][(l+a[i])%d],dp[i][j][l]+a[i]);
                }
            }
        }
    }
    cout<< dp[n][k][0] << endl;
}