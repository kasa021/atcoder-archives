/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/32109569
 * Submitted at: 2022-05-30 09:46:13
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_c
 * Result: RE
 * Execution Time: 114 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
const int mod = 998244353;
void add(int& x,int y){
    x+=y;
    x%=mod;
}

int dp[100005][10];

int main(){
    int n;
    cin>>n;
    for(int d=1;d<=9;d++) dp[1][d]=1;
    for(int i=2;i<=n;i++){
        for(int d=1;d<=9;d++){
            if(d>=2) add(dp[i][d],dp[i-1][d-1]);
            add(dp[i][d],dp[i-1][d]);
            if(d<=8) add(dp[i][d],dp[i-1][d+1]);
        }
    }
    int ans=0;
    for(int d=1;d<=9;d++) add(ans,dp[n][d]);
    cout<<ans<<endl;
    return 0;

}