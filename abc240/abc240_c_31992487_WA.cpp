/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/31992487
 * Submitted at: 2022-05-28 08:05:30
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_c
 * Result: WA
 * Execution Time: 257 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n), b(n);
    rep(i,n) cin>>a[i]>>b[i];
    vector dp(10000,vector<int>(x+1,0));
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(dp[i][j]){
                if(j+a[i]<=x) dp[i+1][j+a[i]]=1;
            }
            if(j+b[i]<=x) dp[i+1][j+b[i]]=1;
        }
    }
    cout << (dp[n][x] ? "Yes" : "No") << '\n';
    
}