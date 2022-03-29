/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30542606
 * Submitted at: 2022-03-29 04:04:55
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_c
 * Result: WA
 * Execution Time: 133 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int main(){
    int n,k;
    cin>> n >> k;
    vector<vector<int>> a(2,vector<int>(n));

    rep(i,2)rep(j,n) cin>>a[i][j];
    vector<vector<bool>> dp(n,vector<bool>(2));

    dp[0][0]=dp[0][1]=true;

    for(int i=1;i<n;i++){
        rep(j,2){
            int pi=i-1;
            rep(pj,2){
                if(!dp[pi][pj]) continue;
                if(abs(a[pj][pi]-a[j][i])>k) continue;
                dp[i][j]=true;
            }
        }
    }
    return 0;
}